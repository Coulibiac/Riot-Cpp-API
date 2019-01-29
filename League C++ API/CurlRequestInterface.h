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

	virtual std::string getGrandmasterList();
	// Get a list of challengers
	virtual std::string getChallengerList();
	virtual std::string getMastersList();

	// Summoner champion functions
	virtual std::string getChampionMasteriesForSummoner(std::string encryptedSummonerId);
	virtual std::string getChampionMasteriesForSummoner(std::string encryptedSummonerId, std::string champId);

	// Summoner name-id functions
	virtual std::string getSummonerInfoWithName(std::string summonerName);
	virtual std::string getSummonerInfoWithAcctId(std::string encryptedAcctId);
	virtual std::string getSummonerInfoWithSummonerId(std::string encryptedSummonerId);

	// Spectator Functions
	virtual std::string getSpectatorKey(std::string encryptedSummonerId);
	virtual std::string getFeaturedGames();

	// Match functions
	virtual std::string getMatchFromMatchId(std::string matchId);
	virtual std::string getMatchListForAccount(std::string encryptedAccountId);
	virtual std::string getTimelineForMatch(std::string matchId);


private:
	static const std::string naUrl;
	static const std::string apiKeyString;

	std::unique_ptr<CurlRequestHandler> requestHandler;
};

#endif