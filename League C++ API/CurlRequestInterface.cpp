#include "CurlRequestInterface.h"
#include "CurlRequestHandler.h"
#include <iostream>

//const std::string CurlRequestInterface::regionUrl = "https://na1.api.riotgames.com";
//const std::string CurlRequestInterface::apiKeyString = "?api_key=RGAPI-24a79721-416c-4cdd-9d34-f0152729b30c";

CurlRequestInterface::CurlRequestInterface(const std::string& apiKey, const std::string& regionBaseUrl)
	: regionUrl(regionBaseUrl), apiKeyString(apiKey)
{
	requestHandler = std::make_unique<CurlRequestHandler>();
}

CurlRequestInterface::~CurlRequestInterface()
{
	
}

std::string CurlRequestInterface::getGrandmasterList()
{
	std::string requestUrl = regionUrl + "/lol/league/v4/grandmasterleagues/by-queue/RANKED_SOLO_5x5?" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

// Get a list of challengers
std::string CurlRequestInterface::getChallengerList()
{
	std::string requestUrl = regionUrl + "/lol/league/v4/challengerleagues/by-queue/RANKED_SOLO_5x5?" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

std::string CurlRequestInterface::getMastersList()
{
	std::string requestUrl = regionUrl + "/lol/league/v4/masterleagues/by-queue/RANKED_SOLO_5x5?" + apiKeyString;
	std::cout << "Sending a request to: " << requestUrl << std::endl;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	std::cout << "Got a reply: " << reply << std::endl;
	return reply;
}

// Summoner champion functions
std::string CurlRequestInterface::getChampionMasteriesForSummoner(std::string encryptedSummonerId)
{
	std::string requestUrl = regionUrl + "/lol/league/v4/champion-masteries/by-summoner/" + encryptedSummonerId + "?" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getChampionMasteriesForSummoner(std::string encryptedSummonerId, std::string champId)
{
	std::string requestUrl = regionUrl + "/lol/champion-mastery/v4/champion-masteries/by-summoner/" + encryptedSummonerId + "/by-champion/" + champId + "?" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

// Summoner name-id functions
std::string CurlRequestInterface::getSummonerInfoWithName(std::string summonerName)
{
	std::string requestUrl = regionUrl + "/lol/league/v4/summoners/by-name/" + summonerName + "?" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getSummonerInfoWithAcctId(std::string encryptedAcctId)
{
	std::string requestUrl = regionUrl + "/lol/league/v4/summoners/by-account/" + encryptedAcctId + "?" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getSummonerInfoWithSummonerId(std::string encryptedSummonerId)
{
	std::string requestUrl = regionUrl + "/lol/summoner/v4/summoners/" + encryptedSummonerId + "?" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

// Spectator Functions
std::string CurlRequestInterface::getSpectatorKey(std::string encryptedSummonerId)
{
	std::string requestUrl = regionUrl + "/lol/spectator/v4/active-games/by-summoner/" + encryptedSummonerId + "?" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getFeaturedGames()
{
	std::string requestUrl = regionUrl + "/lol/spectator/v4/featured-games?" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

// Match functions
std::string CurlRequestInterface::getMatchFromMatchId(std::string matchId)
{
	std::string requestUrl = regionUrl + "/lol/match/v4/matches/" + matchId + "?" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getMatchListForAccount(std::string encryptedAccountId)
{
	std::string requestUrl = regionUrl + "/lol/match/v4/matchlists/by-account/" + encryptedAccountId + "?" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getTimelineForMatch(std::string matchId)
{
	std::string requestUrl = regionUrl + "/lol/match/v4/timelines/by-match/" + matchId + "?" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

