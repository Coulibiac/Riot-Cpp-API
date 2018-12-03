#ifndef FAKE_REQUEST_INTERFACE_H
#define FAKE_REQUEST_INTERFACE_H

#include "HttpRequestInterface.h"

class FakeRequestInterface : public HttpRequestInterface
{
	FakeRequestInterface();

	~FakeRequestInterface();

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

};

#endif