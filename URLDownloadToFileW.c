#include <stdio.h>
#include <Windows.h>

#pragma comment(lib,"UrlMon.lib")

int main()
{
	char* d_url = L"https://image.ahnlab.com/file_upload/asecissue_files/ASEC%20REPORT_vol.102.pdf";
	char* d_path = L"C:\\Users\\kdy\\Desktop\\a.pdf";

	HRESULT hr = URLDownloadToFileW(0, d_url, d_path, 0, 0);

	if (hr == S_OK) {
		printf("Download Success\n");
	}

	return 0;
}