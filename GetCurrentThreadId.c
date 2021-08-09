#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[])
{
	printf("%d\n", GetCurrentThreadId());

	return 0;
}