#ifndef HTTP_REQUEST_INTERFACE_H
#define HTTP_REQUEST_INTERFACE_H

#include <string>

/*
	This is the abstract class that the request interface for the client will inherit from
*/
class HttpRequestInterface
{
public:
	HttpRequestInterface(){}

	virtual ~HttpRequestInterface() {};

	virtual std::string getGrandmasterList() = 0;
	// Get a list of challengers
	virtual std::string getChallengerList() = 0;
	virtual std::string getMastersList() = 0;

	// Summoner champion functions
	virtual std::string getChampionMasteriesForSummoner(std::string summonerId) = 0;
	virtual std::string getChampionMasteriesForSummoner(std::string summonerId, std::string champId) = 0;

	// Summoner name-id functions
	virtual std::string getSummonerInfoWithName(std::string summonerName) = 0;
	virtual std::string getSummonerInfoWithAcctId(std::string acctId) = 0;
	virtual std::string getSummonerInfoWithSummonerId(std::string summonerId) = 0;

	// Spectator Functions
	virtual std::string getSpectatorKey(std::string summonerId) = 0;
	virtual std::string getFeaturedGames() = 0;

	// Match functions
	virtual std::string getMatchFromMatchId(std::string matchId) = 0;
	virtual std::string getMatchListForAccount(std::string accountId) = 0;
	virtual std::string getTimelineForMatch(std::string matchId) = 0;

private:

};

#endif