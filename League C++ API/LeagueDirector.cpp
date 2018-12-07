#include "LeagueDirector.h"
#include "CurlRequestInterface.h"
#include "JsonParser.h"

LeagueDirector::LeagueDirector()
{
	requestInterface = std::make_unique<CurlRequestInterface>();
	jsonParser = std::make_unique<JsonParser>();
}

LeagueDirector::~LeagueDirector()
{

}

std::map<int, std::string> LeagueDirector::getChallengers()
{
	return std::map<int, std::string>();
}

std::map<int, std::string> LeagueDirector::getMasters()
{
	return std::map<int, std::string>();
}