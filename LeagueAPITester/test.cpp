#include <curl/curl.h>
#include <iostream>

int main()
{
	CURL* curlObj = curl_easy_init();
	curl_easy_cleanup(curlObj);
	std::cout << "Tester";
	int Test;
	std::cin >> Test;
	return 0;
}