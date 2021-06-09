#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[]) 
{
	if (DeleteFileA(argv[1]) != 0) {
		printf("Delete Success\n");
	}

	return 0;
}