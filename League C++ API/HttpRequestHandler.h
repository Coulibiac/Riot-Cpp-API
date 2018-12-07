#ifndef HTTP_REQUEST_HANDLER_H
#define HTTP_REQUEST_HANDLER_H

#include <string>

class HttpRequestHandler
{
public:

	HttpRequestHandler() {}
	virtual ~HttpRequestHandler() {}

	virtual std::string sendHttpRequest(const std::string& url) = 0;

private:

};

#endif