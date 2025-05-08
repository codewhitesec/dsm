#include <Windows.h>
#include <stdio.h>

void print_banner(const char* tool_name)
{
    printf("%s (c) CODE WHITE GmbH 2025\n", tool_name);
    printf("https://code-white.com/blog/ivanti-desktop-and-server-management/\n\n");
}

void __RPC_FAR* __RPC_USER midl_user_allocate(size_t cBytes)
{
    return ((void __RPC_FAR*)malloc(cBytes));
}

void __RPC_USER midl_user_free(void __RPC_FAR* p)
{
    free(p);
}
