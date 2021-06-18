#include <stdio.h>
#include <windows.h>

/*
FILE_TYPE_CHAR
0x0002
The specified file is a character file, typically an LPT device or a console.

FILE_TYPE_DISK
0x0001
The specified file is a disk file.

FILE_TYPE_PIPE
0x0003
The specified file is a socket, a named pipe, or an anonymous pipe.

FILE_TYPE_REMOTE
0x8000
Unused.

FILE_TYPE_UNKNOWN
0x0000
Either the type of the specified file is unknown, or the function failed.
*/

int main(int argc, char* argv[]) 
{
	HANDLE hFile = CreateFileA(
		argv[1],
		GENERIC_READ,
		0,
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL
	);

	printf("%X\n", GetFileType(hFile));

	return 0;
}