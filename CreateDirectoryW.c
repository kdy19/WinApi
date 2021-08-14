#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[])
{
	CreateDirectoryW(L"./TEST", NULL);

	return 0;
}