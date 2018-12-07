#include "CurlRequestHandler.h"
#include "curl/curl.h"

CurlRequestHandler::CurlRequestHandler()
{
	curl_global_init(CURL_GLOBAL_ALL);
}

CurlRequestHandler::~CurlRequestHandler()
{
	curl_global_cleanup();
}

std::size_t CurlRequestHandler::curlWriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
	std::size_t responseSize = size * nmemb;
	static_cast<std::string*>(userp)->append((char*)contents, responseSize);
	return responseSize;

}

std::string CurlRequestHandler::sendHttpRequest(const std::string& url)
{
	CURL* curlObj = curl_easy_init();
	std::string callbackString = "";

	if (curlObj)
	{
		CURLcode response;
		curl_easy_setopt(curlObj, CURLOPT_URL, url.c_str());
		curl_easy_setopt(curlObj, CURLOPT_WRITEFUNCTION, curlWriteCallback);

		curl_easy_setopt(curlObj, CURLOPT_WRITEDATA, &callbackString);

		response = curl_easy_perform(curlObj);
		if (response != CURLE_OK)
		{
			// Log error here
		}
		curl_easy_cleanup(curlObj);

	}
	return callbackString;
}