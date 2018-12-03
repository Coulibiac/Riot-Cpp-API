#include "CurlRequestInterface.h"

CurlRequestInterface::CurlRequestInterface()
{

}




CurlRequestInterface::~CurlRequestInterface()
{

}

// Get a list of challengers
std::string CurlRequestInterface::getChallengerList()
{
	return "";
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