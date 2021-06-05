#include <stdio.h>
#include <windows.h>

int main() {

	char buffer[256] = { 0, };
	DWORD size = sizeof(buffer) - 1;

	GetTempPathA(&size, buffer);

	printf("%s\n", buffer);

}