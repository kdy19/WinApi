#include <stdio.h>
#include <windows.h>


int main(int argc, char* argv[]) 
{
	char buffer[256] = { 0, };

	GetModuleFileNameA(NULL, buffer, sizeof(buffer) - 1);

	printf("%s\n", buffer);

	return 0;
}