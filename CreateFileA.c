#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[])
{
	HANDLE hFile = CreateFileA(
		"./test.txt",
		GENERIC_READ,
		0,
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL
	);

	if (hFile != INVALID_HANDLE_VALUE) {
		printf("Success\n");
	}

	CloseHandle(hFile);

	return 0;
}