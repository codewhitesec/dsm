### DSM Decrypt

----

This project uses the `DSM ICDB mgmtagnt extension` RPC interface to request
credential decryption from a running DSM agent.


### Usage

----

```
C:\>.\dsm-decrypt.exe
.\dsm-decrypt.exe <ciphertext>

C:\>.\dsm-decrypt.exe K1MXSOOEE*SUOEM;FOOBRM/SOQRXFO;BMBFSOEMAFO;LEBFOAU
[*] RpcStringBindingCompose status code: 0
[*] String binding: ncalrpc:[4e6038af-ab01-4bed-ac09-87abad5e6e81]
[*] RpcBindingFromStringBinding status code: 0
[*] RpcStringFree status code: 0
[*] Requesting decryption from DSM via RPC...
[*] Decrypted: MuesseGebeImmerDieBeste!
```
