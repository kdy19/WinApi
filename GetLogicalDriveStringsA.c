#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[]) 
{
	char buffer[256] = { 0, };
	DWORD size = sizeof(buffer) - 1;

	int result = GetLogicalDriveStringsA(&size, buffer);

	printf("%s\n", buffer);
	printf("length: %d\n", result);

	return 0;
}