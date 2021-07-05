#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[]) 
{
	HWND h_wnd = FindWindow(L"notepad", NULL);

	if (h_wnd != NULL) {
		printf("notepad open\n");
	}

	return 0;
}