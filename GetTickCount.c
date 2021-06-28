#include <stdio.h>
#include <windows.h>


int main(int argc, char* argv[]) 
{
	unsigned long time32 = GetTickCount();
	unsigned long long int time64 = GetTickCount64();

	printf("32bit: %lu/s\n64bit: %llu/s", time32/1000, time64/1000);

	return 0;
}