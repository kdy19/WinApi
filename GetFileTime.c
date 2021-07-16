#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[])
{
	FILETIME cTime, aTime, wTime;
	SYSTEMTIME stUTC;

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
		GetFileTime(hFile, &cTime, &aTime, &wTime);

		FileTimeToSystemTime(&cTime, &stUTC);
		printf("Created on: %d-%02d-%02d %02d:%02d\n", stUTC.wYear, stUTC.wMonth, stUTC.wDay, stUTC.wHour, stUTC.wMinute);

		FileTimeToSystemTime(&aTime, &stUTC);
		printf("Accessed on: %d-%02d-%02d %02d:%02d\n", stUTC.wYear, stUTC.wMonth, stUTC.wDay, stUTC.wHour, stUTC.wMinute);

		FileTimeToSystemTime(&wTime, &stUTC);
		printf("Wrtied on: %d-%02d-%02d %02d:%02d\n", stUTC.wYear, stUTC.wMonth, stUTC.wDay, stUTC.wHour, stUTC.wMinute);
	}

	CloseHandle(hFile);

	return 0;
}