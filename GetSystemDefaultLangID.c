#include <stdio.h>
#include <windows.h>

// https://renenyffenegger.ch/notes/Windows/development/Internationalization/language

int main(int argc, char* argv[]) 
{
	printf("%d", GetSystemDefaultLangID());

	return 0;
}