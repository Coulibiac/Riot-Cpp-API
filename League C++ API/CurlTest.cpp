#include <curl/curl.h>
#include <iostream>

int setUpCurl()
{
	CURL* curlObj = curl_easy_init();
	curl_easy_cleanup(curlObj);
	return 0;

}