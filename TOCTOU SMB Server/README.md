### TOC TOU SMB Server

----

This project implements a simple SMB server suited for TOC TOU abuse. It is based on [SMBLibrary](https://github.com/TalAloni/SMBLibrary)
by Tal Aloni and is basically a copy of the Memory Access Trap SMB server published by [James Forshaw](https://x.com/tiraniddo)
in his [Memory Access Trap research](https://googleprojectzero.blogspot.com/2021/01/windows-exploitation-tricks-trapping.html).

The SMB server serves a single file and switches the file contents after a specific amount of file reads. In the
context of DSM exploitation, two additional changes to the *SMBLibrary* were required:

1. It was required to enable NULL session support, by replacing the `IsGuest` session flag with `IsNull`.
2. It was required to add support for *lock* operations. Simply returning a success status was sufficient.

Especially the first change is hard to achieve programatically. Therefore, the *SMBLibrary* was patched instead.


### Usage

----

The server supports Linux and Windows operating systems. On Windows operating systems, you
need to make sure that port `445` is available, which can usually be achieved by disabling the
`LANMANSERVER` service and restarting the system. To start the server, run:

```
dotnet run --project TOCTOU SMB Server.csproj
```

You can also compile the server for a specific runtime using:

```
dotnet publish --runtime win-x64
```
