#include <stdio.h>
#include <windows.h>

int main(int argc, char** argv) {
    LPWSTR buf[1024] = { 0, };
    DWORD buf_size = 1024;
    GetEnvironmentVariableW(L"TEMP", buf, buf_size);
    wprintf(L"%s\n", buf);

    return 0;
}

