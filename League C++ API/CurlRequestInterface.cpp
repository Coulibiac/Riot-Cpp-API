#include "CurlRequestInterface.h"
#include "CurlRequestHandler.h"

const std::string naUrl = "https://na1.api.riotgames.com";
const std::string apiKeyString = "?api_key=RGAPI-4bab95b3-f85f-4b95-9554-d2da5931d3d2";

CurlRequestInterface::CurlRequestInterface()
{
	requestHandler = std::make_unique<CurlRequestHandler>();
}

CurlRequestInterface::~CurlRequestInterface()
{
	
}

// Get a list of challengers
std::string CurlRequestInterface::getChallengerList()
{
	std::string requestUrl = naUrl + "/lol/league/v3/challengerleagues/by-queue/RANKED_SOLO_5X5" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

// Summoner champion functions
std::string CurlRequestInterface::getChampionMasteriesForSummoner(std::string summonerId)
{
	return "";
}
std::string CurlRequestInterface::getChampionMasteriesForSummoner(std::string summonerId, std::string champId)
{
	return "";
}

// Summoner name-id functions
std::string CurlRequestInterface::getSummonerInfoWithName(std::string summonerName)
{
	return "";
}
std::string CurlRequestInterface::getSummonerInfoWithAcctId(std::string acctId)
{
	return "";
}
std::string CurlRequestInterface::getSummonerInfoWithSummonerId(std::string summonerId)
{
	return "";
}

// Spectator Functions
std::string CurlRequestInterface::getSpectatorKey(std::string summonerId)
{
	return "";
}
std::string CurlRequestInterface::getFeaturedGames()
{
	return "";
}

// Match functions
std::string CurlRequestInterface::getMatchFromMatchId(std::string matchId)
{
	return "";
}
std::string CurlRequestInterface::getMatchListForAccount(std::string accountId)
{
	return "";
}
std::string CurlRequestInterface::getTimelineForMatch(std::string matchId)
{
	return "";
}

