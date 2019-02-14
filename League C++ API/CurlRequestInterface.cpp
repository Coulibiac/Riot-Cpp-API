#include "CurlRequestInterface.h"
#include "CurlRequestHandler.h"
#include <iostream>

CurlRequestInterface::CurlRequestInterface(const std::string& apiKey, const std::string& regionBaseUrl)
	: regionUrl(regionBaseUrl), apiKeyString(apiKey), requestHandler(std::make_unique<CurlRequestHandler>())
{
	//requestHandler = std::make_unique<CurlRequestHandler>();
}

CurlRequestInterface::~CurlRequestInterface()
{
	
}

std::string CurlRequestInterface::getGrandmasterList()
{
	std::string requestUrl = regionUrl + "/lol/league/v4/grandmasterleagues/by-queue/RANKED_SOLO_5x5?api_key=" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

// Get a list of challengers
std::string CurlRequestInterface::getChallengerList()
{
	std::string requestUrl = regionUrl + "/lol/league/v4/challengerleagues/by-queue/RANKED_SOLO_5x5?api_key=" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

std::string CurlRequestInterface::getMastersList()
{
	std::string requestUrl = regionUrl + "/lol/league/v4/masterleagues/by-queue/RANKED_SOLO_5x5?api_key=" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

// Summoner champion functions
std::string CurlRequestInterface::getChampionMasteriesForSummoner(std::string encryptedSummonerId)
{
	std::string requestUrl = regionUrl + "/lol/league/v4/champion-masteries/by-summoner/" + encryptedSummonerId + "?api_key=" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getChampionMasteriesForSummoner(std::string encryptedSummonerId, std::string champId)
{
	std::string requestUrl = regionUrl + "/lol/champion-mastery/v4/champion-masteries/by-summoner/" + encryptedSummonerId + "/by-champion/" + champId + "?api_key=" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

// Summoner name-id functions
std::string CurlRequestInterface::getSummonerInfoWithName(std::string summonerName)
{
	std::string requestUrl = regionUrl + "/lol/league/v4/summoners/by-name/" + summonerName + "?api_key=" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getSummonerInfoWithAcctId(std::string encryptedAcctId)
{
	std::string requestUrl = regionUrl + "/lol/league/v4/summoners/by-account/" + encryptedAcctId + "?api_key=" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getSummonerInfoWithSummonerId(std::string encryptedSummonerId)
{
	std::string requestUrl = regionUrl + "/lol/summoner/v4/summoners/" + encryptedSummonerId + "?api_key=" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

// Spectator Functions
std::string CurlRequestInterface::getSpectatorKey(std::string encryptedSummonerId)
{
	std::string requestUrl = regionUrl + "/lol/spectator/v4/active-games/by-summoner/" + encryptedSummonerId + "?api_key=" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getFeaturedGames()
{
	std::string requestUrl = regionUrl + "/lol/spectator/v4/featured-games?api_key=" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

// Match functions
std::string CurlRequestInterface::getMatchFromMatchId(std::string matchId)
{
	std::string requestUrl = regionUrl + "/lol/match/v4/matches/" + matchId + "?api_key=" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getMatchListForAccount(std::string encryptedAccountId)
{
	std::string requestUrl = regionUrl + "/lol/match/v4/matchlists/by-account/" + encryptedAccountId + "?api_key=" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getTimelineForMatch(std::string matchId)
{
	std::string requestUrl = regionUrl + "/lol/match/v4/timelines/by-match/" + matchId + "?api_key=" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

