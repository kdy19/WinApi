#include <stdio.h>
#include <windows.h>

int main() {

	int result = GetDriveType(L"C:\\");

	/*
		return 3: Hard Disk
		return 4: Network Drive
		return 5: CD-ROM
		return 6: RAM Disk
	
	*/

	printf("%d\n", result);

	return 0;

}