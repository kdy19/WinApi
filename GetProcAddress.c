#include <stdio.h>
#include <windows.h>

int main() {
	
	HMODULE hModule;
	
	hModule = LoadLibrary("kernel32.dll");
	
	printf("%p\n", GetProcAddress(hModule, "GetCurrentProcessId"));
	
	FreeLibrary(hModule);
	
}
