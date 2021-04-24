#include <stdio.h>
#include <Windows.h>

int main()
{
	if (IsDebuggerPresent() == 1) {
		MessageBox(0, L"Debugger Detected!!!", L"Message", MB_OK);
	}
	else {
		MessageBox(0, L"No Debugger Detected!!!", L"Message", MB_OK);
	}

	return 0;
}