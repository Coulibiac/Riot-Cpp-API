#include <spdlog/spdlog.h>

#include "LeagueDirector.h"
#include "CurlRequestInterface.h"
#include "JsonParser.h"
#include "LeaguePlayer.h"


LeagueDirector::LeagueDirector(const std::string& apiKey, const std::string& regionBaseUrl)
	: jsonParser(std::make_unique<JsonParser>()), requestInterface(std::make_unique<CurlRequestInterface>(apiKey, regionBaseUrl))
{
	//requestInterface = std::make_unique<CurlRequestInterface>(apiKey, regionBaseUrl);
	//jsonParser = std::make_unique<JsonParser>();
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
	spdlog::info("Getting a list of masters players");
	std::map<std::string, std::string> mastersList;
	std::string stringJson = requestInterface->getMastersList();
	if (stringJson != "")
	{
		// TODO: Parse JSON
		std::cout << stringJson << std::endl;
		mastersList = jsonParser->parseMasterIds(stringJson);
	}
	return mastersList;
	//return std::map<std::string, std::string>();
}

std::vector<LeaguePlayer> LeagueDirector::returnMastersPlayers()
{
	std::vector<LeaguePlayer> rtnVal;
	std::string stringJson = requestInterface->getMastersList();
	if (stringJson != "")
	{
		// TODO: Parse JSON
		//std::cout << stringJson << std::endl;
		rtnVal = jsonParser->returnAllPlayers(stringJson);
		spdlog::info("RtnVal Size: {}", rtnVal.size());
	}
	return rtnVal;
}
