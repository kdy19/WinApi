#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[])
{
	char buf[256] = { 0, };

	GetFullPathNameA("test.txt", sizeof(buf) - 1, buf, NULL);

	printf("%s\n", buf);

	return 0;
}