#include <stdio.h>
#include <windows.h>

void main()
{
	HANDLE hFile = CreateFile(L"main.exe", GENERIC_READ, FILE_SHARE_READ, NULL,
		OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	HANDLE hFileMap = CreateFileMapping(hFile, NULL, PAGE_READONLY, 0, 0, NULL);
	DWORD dwSize = GetFileSize(hFile, 0);
	LPBYTE lpFileBase = (LPBYTE)MapViewOfFile(hFileMap, FILE_MAP_READ, 0, 0, dwSize);
	IMAGE_DOS_HEADER* pDosHeader = (PIMAGE_DOS_HEADER)lpFileBase;

	printf("%X\n", pDosHeader->e_magic);

	CloseHandle(hFile);
	CloseHandle(hFileMap);

	return 0;
}