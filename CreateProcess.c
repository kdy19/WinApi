#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

int main(int argc, char* argv[]) 
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	memset(&si, 0, sizeof(si));
	si.cb = sizeof(si);
	memset(&pi, 0, sizeof(pi));

	CreateProcess(L"C:\\WINDOWS\\system32\\calc.exe", NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);

	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);

	return 0;
}