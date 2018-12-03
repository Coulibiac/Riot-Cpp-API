#ifndef HTTP_REQUEST_HANDLER_H
#define HTTP_REQUEST_HANDLER_H

class HttpRequestHandler
{
public:

	HttpRequestHandler() {}
	virtual ~HttpRequestHandler() {}

	virtual void setRegion() = 0;

private:

};

#endif