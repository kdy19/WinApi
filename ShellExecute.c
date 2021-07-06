#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[]) 
{
	ShellExecute(NULL, L"open", L"C:\\Program Files\\Mozilla Firefox\\firefox.exe", NULL, NULL, SW_SHOW);

	return 0;
}