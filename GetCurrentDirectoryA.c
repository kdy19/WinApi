#include <windows.h>
#include <stdio.h>

int main()
{

    char path[512] = { 0, };
    DWORD size = sizeof(path) - 1;

    GetCurrentDirectoryA(size, path);

    printf("%s", path);
    
}