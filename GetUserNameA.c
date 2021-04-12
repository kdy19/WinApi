#include <windows.h>
#include <stdio.h>

int main()
{
    char buffer[256] = "";
    DWORD size = sizeof(buffer) - 1;
    
    GetUserNameA(buffer, &size);
    printf("%s\n", buffer);
}