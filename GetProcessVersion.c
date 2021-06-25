#include <stdio.h>
#include <windows.h>


int main(int argc, char* argv[]) 
{
	DWORD pid = GetCurrentProcessId();
	DWORD version;
	WORD major, minor;
	
	version = GetProcessVersion(pid);

	major = HIWORD(version);
	minor = LOWORD(version);

	printf("pid version: %d %d %d\n", version, major, minor);

	return 0;
}