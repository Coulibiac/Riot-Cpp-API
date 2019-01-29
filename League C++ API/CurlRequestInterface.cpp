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

std::string CurlRequestInterface::getGrandmasterList()
{
	std::string requestUrl = naUrl + "/lol/league/v3/grandmasterleagues/by-queue/RANKED_SOLO_5X5" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

// Get a list of challengers
std::string CurlRequestInterface::getChallengerList()
{
	std::string requestUrl = naUrl + "/lol/league/v3/challengerleagues/by-queue/RANKED_SOLO_5X5" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

std::string CurlRequestInterface::getMastersList()
{
	std::string requestUrl = naUrl + "/lol/league/v3/masterleagues/by-queue/RANKED_SOLO_5X5" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

// Summoner champion functions
std::string CurlRequestInterface::getChampionMasteriesForSummoner(std::string encryptedSummonerId)
{
	std::string requestUrl = naUrl + "/lol/league/v4/champion-masteries/by-summoner/" + encryptedSummonerId + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getChampionMasteriesForSummoner(std::string encryptedSummonerId, std::string champId)
{
	std::string requestUrl = naUrl + "/lol/champion-mastery/v4/champion-masteries/by-summoner/" + encryptedSummonerId + "/by-champion/" + champId + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

// Summoner name-id functions
std::string CurlRequestInterface::getSummonerInfoWithName(std::string summonerName)
{
	std::string requestUrl = naUrl + "/lol/league/v4/summoners/by-name/" + summonerName + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getSummonerInfoWithAcctId(std::string encryptedAcctId)
{
	std::string requestUrl = naUrl + "/lol/league/v4/summoners/by-account/" + encryptedAcctId + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getSummonerInfoWithSummonerId(std::string encryptedSummonerId)
{
	std::string requestUrl = naUrl + "/lol/summoner/v4/summoners/" + encryptedSummonerId + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

// Spectator Functions
std::string CurlRequestInterface::getSpectatorKey(std::string encryptedSummonerId)
{
	std::string requestUrl = naUrl + "/lol/spectator/v4/active-games/by-summoner/" + encryptedSummonerId + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getFeaturedGames()
{
	std::string requestUrl = naUrl + "/lol/spectator/v4/featured-games" + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

// Match functions
std::string CurlRequestInterface::getMatchFromMatchId(std::string matchId)
{
	std::string requestUrl = naUrl + "/lol/match/v4/matches/" + matchId + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getMatchListForAccount(std::string encryptedAccountId)
{
	std::string requestUrl = naUrl + "/lol/match/v4/matchlists/by-account/" + encryptedAccountId + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}
std::string CurlRequestInterface::getTimelineForMatch(std::string matchId)
{
	std::string requestUrl = naUrl + "/lol/match/v4/timelines/by-match/" + matchId + apiKeyString;
	std::string reply = requestHandler->sendHttpRequest(requestUrl);
	return reply;
}

