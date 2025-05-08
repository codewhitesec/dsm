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


using DiskAccessLibrary.FileSystems.Abstractions;
using System.Reflection;

namespace TOCTOUSmbServer
{
    class FakeFileSystem : IFileSystem
    {
        // Number of file reads before switching the target file
        private static uint SwitchCount = 12;

        // File that should get served initially
        private static readonly string TargetFile = "DSMClient.msi";

        // File that should get served after SwitchCount got reached
        private static readonly string SwapFile = "Evil.msi";

        // Track the number of target file fetches
        private uint FetchCount = 0;

        private static readonly DateTime _curr_time = DateTime.Now;

        public string Name => nameof(FakeFileSystem);

        public long Size => 100L * 1024L * 1024L * 1024L;

        public long FreeSpace => 99L * 1024L * 1024L * 1024L;

        public bool SupportsNamedStreams => false;

        public FileSystemEntry CreateDirectory(string path)
        {
            Console.WriteLine("====> {0}: {1}", MethodBase.GetCurrentMethod().Name, path);
            throw new NotImplementedException();
        }

        public FileSystemEntry CreateFile(string path)
        {
            Console.WriteLine("====> {0}: {1}", MethodBase.GetCurrentMethod().Name, path);
            return CreateEntry(path, this.FetchCount);
        }

        public void Delete(string path)
        {
            Console.WriteLine("====> {0}: {1}", MethodBase.GetCurrentMethod().Name, path);
        }

        public FileSystemEntry GetEntry(string path)
        {
            Console.WriteLine("====> {0}: {1}", MethodBase.GetCurrentMethod().Name, path);
            return CreateEntry(path, this.FetchCount);
        }

        public List<KeyValuePair<string, ulong>> ListDataStreams(string path)
        {
            Console.WriteLine("====> {0}: {1}", MethodBase.GetCurrentMethod().Name, path);
            FileSystemEntry entry = CreateEntry(path, this.FetchCount);
            List<KeyValuePair<string, ulong>> result = new List<KeyValuePair<string, ulong>>();

            if (!entry.IsDirectory)
            {
                result.Add(new KeyValuePair<string, ulong>("::$DATA", entry.Size));
            }

            return result;
        }

        public List<FileSystemEntry> ListEntriesInDirectory(string path)
        {
            Console.WriteLine("====> {0}: {1}", MethodBase.GetCurrentMethod().Name, path);

            List<FileSystemEntry> ents = new List<FileSystemEntry>
            {
                CreateEntry("DSMClient.msi", this.FetchCount)
            };

            return ents;
        }

        public void Move(string source, string destination)
        {
            Console.WriteLine("====> {0}: {1} -> {2}", MethodBase.GetCurrentMethod().Name, source, destination);
            throw new NotImplementedException();
        }

        public Stream OpenFile(string path, FileMode mode, FileAccess access, FileShare share, FileOptions options)
        {
            Console.WriteLine("====> {0}: {1} {2} {3} {4} {5}", MethodBase.GetCurrentMethod().Name, path, mode, access, share, options);

            if (path.EndsWith(TargetFile))
            {
                Console.WriteLine("====> Fetch Count: {0}", this.FetchCount++);

                if (this.FetchCount < SwitchCount)
                {
                    Console.WriteLine("====> Serving original target file: {0}", TargetFile);
                    return File.Open(TargetFile, mode, access, share);
                }

                else
                {
                    Console.WriteLine("====> Serving swapped target file: {0}", SwapFile);
                    return File.Open(SwapFile, mode, access, share);
                }
            }

            return File.Open(path, mode);
        }

        public void SetAttributes(string path, bool? isHidden, bool? isReadonly, bool? isArchived)
        {
            Console.WriteLine("====> {0}: {1} {2} {3} {4}", MethodBase.GetCurrentMethod().Name, path, isHidden, isReadonly, isArchived);
        }

        public void SetDates(string path, DateTime? creationDT, DateTime? lastWriteDT, DateTime? lastAccessDT)
        {
            Console.WriteLine("====> {0}: {1} {2} {3} {4}", MethodBase.GetCurrentMethod().Name, path, creationDT, lastWriteDT, lastAccessDT);
        }

        private static FileSystemEntry CreateEntry(string path, uint count)
        {
            if (path.StartsWith("\\") && path != "\\")
            {
                // When an SMB client fetches a file from the root of the share, it's path gets prefixed with '\'.
                // Most operations (file read, copy, etc.) work without stripping the '\'. However, when installing
                // an MSI from the share, the operation fails. Stripping the '\' is required in that case.
                path = path.Substring(1);
            }

            if (path == TargetFile)
            {
                if (count < SwitchCount)
                {
                    ulong FileSize = (ulong)(new FileInfo(TargetFile).Length);
                    return new FileSystemEntry(path, Path.GetFileName(path), path.EndsWith("\\"), FileSize, _curr_time, _curr_time, _curr_time, false, false, false);
                }

                else
                {
                    ulong FileSize = (ulong)(new FileInfo(SwapFile).Length);
                    return new FileSystemEntry(path, Path.GetFileName(path), path.EndsWith("\\"), FileSize, _curr_time, _curr_time, _curr_time, false, false, false);
                }
            }

            return new FileSystemEntry(path, Path.GetFileName(path), path.EndsWith("\\"), 1024 * 1024 * 1024, _curr_time, _curr_time, _curr_time, false, false, false);
        }
    }
}
