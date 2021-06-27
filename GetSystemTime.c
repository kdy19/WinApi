#include <stdio.h>
#include <windows.h>


int main(int argc, char* argv[]) 
{
	SYSTEMTIME time;

	GetSystemTime(&time);

	printf("The System time is: %04d-%02d-%02d %02d:%02d:%02d\n", time.wYear, time.wMonth, time.wDay, time.wHour, time.wMinute, time.wSecond);

	return 0;
}