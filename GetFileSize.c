#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[]) 
{
	DWORD size = 0;
	
	HANDLE hFile = CreateFileA(
		argv[1],
		GENERIC_READ,
		0,
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL
	);

	size = GetFileSize(hFile, NULL);

	printf("%s: %d byte\n", argv[1], size);

	CloseHandle(hFile);

	return 0;
}