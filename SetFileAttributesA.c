#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[])
{
	char* fileName = L"./test.txt";
	int result = 0;

	result = SetFileAttributesA(fileName, FILE_ATTRIBUTE_READONLY);
	
	if (result != 0) {
		printf("Success");
	}
	else {
		printf("Fail");
	}

	return 0;
}