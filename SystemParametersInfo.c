#include <stdio.h>
#include <windows.h>

int main()
{

	SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, L"<File Path>", SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
	
	return 0;
}