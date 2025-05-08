### Ivanti DSM RPC Pwn

----

This repository contains some proof of concept exploits targeting
*Ivanti Desktop and Server Management* (*DSM*). The solution contains
the following projects:

* *DSM decrypt*: Decrypt credentials from DSM configuration files
* *DSM Exec*: Execute commands as the DSM software installation user
* *DSM MSI*: Request the DSM agent to install a user specified MSI package
* *TOCTOU SMB Server*: SMB server for malicious MSI installation

Details regarding the different projects and the underlying techniques can
be found within our [Blog Post](TODO).

The respective vulnerabilities that are targeted by this repository
were all patched long time ago. The fact that credentials stored in
DSM configuration files can be decrypted is [publicly known](https://www.syss.de/fileadmin/dokumente/Publikationen/Advisories/SYSS-2019-019.txt)
and it is very likely that threat actors already have this capability.
