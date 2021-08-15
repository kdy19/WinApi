#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[])
{
	char buf[1024] = { 0, };
	DWORD dwRead;

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
		ReadFile(hFile, buf, 1024, &dwRead, NULL);
		printf("%s\n", buf);
	}

	CloseHandle(hFile);
}