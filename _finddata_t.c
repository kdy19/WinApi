#include <windows.h>
#include <stdio.h>
#include <io.h>

typedef struct _finddata_t  FILE_SEARCH;

int main()
{
    FILE_SEARCH fs;
    long handle = 0;

    int result = 0;

    handle = _findfirst("C:\\\\*.*", &fs);

    if (handle == -1)
        printf("path not find!\n");

    // fs.attrib == 0x00 Normal
    // fs.attrib == 0x01 Read-only
    // fs.attrib == 0x02 Hidden File
    // fs.attrib == 0x04 System file
    // fs.attrib == 0x10 Subdirectory
    // fs.attrib == 0x20 Archive

    while (result != -1) {

        printf("%s %10d\n", fs.name, fs.size);

        result = _findnext(handle, &fs);
    }
    _findclose(handle);

    return 1;
}