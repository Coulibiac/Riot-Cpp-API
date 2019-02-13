#include "LeagueDirector.h"
#include "CurlRequestInterface.h"
#include "JsonParser.h"

LeagueDirector::LeagueDirector(const std::string& apiKey, const std::string& regionBaseUrl)
{
	requestInterface = std::make_unique<CurlRequestInterface>(apiKey, regionBaseUrl);
	jsonParser = std::make_unique<JsonParser>();
}

LeagueDirector::~LeagueDirector()
{

}

std::map<std::string, std::string> LeagueDirector::getChallengers()
{
	std::map<std::string, std::string> challengerList;
	std::string stringJson = requestInterface->getChallengerList();
	if (stringJson != "")
	{
		// TODO: Parse JSON
	}
	return std::map<std::string, std::string>();
}

std::map<std::string, std::string> LeagueDirector::getMasters()
{
	std::map<std::string, std::string> mastersList;
	std::string stringJson = requestInterface->getMastersList();
	if (stringJson != "")
	{
		// TODO: Parse JSON
		mastersList["test"] = stringJson;
	}
	return mastersList;
	//return std::map<std::string, std::string>();
}