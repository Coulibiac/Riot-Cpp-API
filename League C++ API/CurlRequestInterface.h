#ifndef CURL_REQUEST_INTERFACE_H
#define CURL_REQUEST_INTERFACE_H

#include "HttpRequestInterface.h"
#include "curl/curl.h"
#include <memory>

class CurlRequestHandler;

/*
	This is the class that defines the CURL interface, and uses the CURL HTTP handler object
*/
class CurlRequestInterface : public HttpRequestInterface
{
public:
	CurlRequestInterface();

	~CurlRequestInterface();

	// Get a list of challengers
	virtual std::string getChallengerList();

	// Summoner champion functions
	virtual std::string getChampionMasteriesForSummoner(std::string summonerId);
	virtual std::string getChampionMasteriesForSummoner(std::string summonerId, std::string champId);

	// Summoner name-id functions
	virtual std::string getSummonerInfoWithName(std::string summonerName);
	virtual std::string getSummonerInfoWithAcctId(std::string acctId);
	virtual std::string getSummonerInfoWithSummonerId(std::string summonerId);

	// Spectator Functions
	virtual std::string getSpectatorKey(std::string summonerId);
	virtual std::string getFeaturedGames();

	// Match functions
	virtual std::string getMatchFromMatchId(std::string matchId);
	virtual std::string getMatchListForAccount(std::string accountId);
	virtual std::string getTimelineForMatch(std::string matchId);


private:
	static const std::string naUrl;
	static const std::string apiKeyString;

	std::unique_ptr<CurlRequestHandler> requestHandler;
};

#endif