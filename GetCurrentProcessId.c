#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[]) 
{
	
	printf("Current Process ID: %d", GetCurrentProcessId());
	
	Sleep(10000); // millisecond

	return 0;
}