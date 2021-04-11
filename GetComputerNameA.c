#include <windows.h>
#include <stdio.h>

int main()
{
    char buffer[256] = "";
    DWORD size = sizeof(buffer);
    
    GetComputerNameA(buffer, &size);
    printf("%s\n", buffer);
}