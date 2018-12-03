#ifndef HTTP_REQUEST_INTERFACE_H
#define HTTP_REQUEST_INTERFACE_H

#include <string>

/*
	This is the abstract class that the request interface for the client will inherit from
*/
class HttpRequestInterface
{
public:
	HttpRequestInterface(){}

	virtual ~HttpRequestInterface() {};

	virtual std::string getChallengerList() = 0;
	virtual std::string getChampionMasteriesForSummoner(std::string summonerId) = 0;

private:
};

#endif