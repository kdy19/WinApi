#include <stdio.h>
#include <direct.h>

int main()
{
	char* path = "C:\\Users\\kdy\\source\\repos\\winapi\\winapi\\aaa";
	int result = _rmdir(path);

	if (result == 0)
		printf("Success\n");
	else if (result == -1) {
		printf("Fail\n");
	}

}