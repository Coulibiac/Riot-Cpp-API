#ifndef CURL_REQUEST_HANDLER_H
#define CURL_REQUEST_HANDLER_H

#include "HttpRequestHandler.h"

/*
	This class handles sending requests to the Riot API with cURL
*/
class CurlRequestHandler : public HttpRequestHandler
{
public:

	CurlRequestHandler();

	virtual ~CurlRequestHandler();

	virtual std::string sendHttpRequest(const std::string& url);

private:

	static size_t curlWriteCallback(void *contents, size_t size, size_t nmemb, void *userp);
};

#endif