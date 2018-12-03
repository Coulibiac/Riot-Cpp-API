#include "FakeRequestInterface.h"

FakeRequestInterface::FakeRequestInterface()
{

}




FakeRequestInterface::~FakeRequestInterface()
{

}

// Get a list of challengers
std::string FakeRequestInterface::getChallengerList()
{
	std::string fakeChallengerList = "{\"tier\": \"CHALLENGER\",\"queue\" : \"RANKED_SOLO_5x5\",\"leagueId\" : \"930faadc-f191-3fc0-b715-79804ef73cfc\",\"name\" : \"Taric's Shadehunters\",\"entries\" : [{\"hotStreak\": true,\"wins\" : 663,\"veteran\" : false,\"losses\" : 606,\"rank\" : \"I\",\"playerOrTeamName\" : \"Command Attack\",\"inactive\" : false,\"playerOrTeamId\" : \"34663196\",\"freshBlood\" : false,\"leaguePoints\" : 413}]";
	return fakeChallengerList;
}

// Summoner champion functions
std::string FakeRequestInterface::getChampionMasteriesForSummoner(std::string summonerId)
{
	std::string fakeChampData = "[{\"championLevel\": 7, \"chestGranted\" : true,\"championPoints\" : 268019,\"championPointsSinceLastLevel\" : 246419,\"playerId\" : 73779900,\"championPointsUntilNextLevel\" : 0,\"tokensEarned\" : 0,\"championId\" : 16,\"lastPlayTime\" : 1537398869000}]";
	return fakeChampData;
}
std::string FakeRequestInterface::getChampionMasteriesForSummoner(std::string summonerId, std::string champId)
{
	std::string fakeChampData = "[{\"championLevel\": 7, \"chestGranted\" : true,\"championPoints\" : 268019,\"championPointsSinceLastLevel\" : 246419,\"playerId\" : 73779900,\"championPointsUntilNextLevel\" : 0,\"tokensEarned\" : 0,\"championId\" : 16,\"lastPlayTime\" : 1537398869000}]";
	return fakeChampData;
}

// Summoner name-id functions
std::string FakeRequestInterface::getSummonerInfoWithName(std::string summonerName)
{
	std::string fakeSummonerInfo = "{\"profileIconId\": 3791,\"name\" : \"Wyntèr\",\"summonerLevel\" : 124,\"accountId\" : 232276261,\"id\" : 73779900,\"revisionDate\" : 1543799017000}";
	return fakeSummonerInfo;
}
std::string FakeRequestInterface::getSummonerInfoWithAcctId(std::string acctId)
{
	std::string fakeSummonerInfo = "{\"profileIconId\": 3791,\"name\" : \"Wyntèr\",\"summonerLevel\" : 124,\"accountId\" : 232276261,\"id\" : 73779900,\"revisionDate\" : 1543799017000}";
	return fakeSummonerInfo;
}
std::string FakeRequestInterface::getSummonerInfoWithSummonerId(std::string summonerId)
{
	std::string fakeSummonerInfo = "{\"profileIconId\": 3791,\"name\" : \"Wyntèr\",\"summonerLevel\" : 124,\"accountId\" : 232276261,\"id\" : 73779900,\"revisionDate\" : 1543799017000}";
	return fakeSummonerInfo;
}

// Spectator Functions
std::string FakeRequestInterface::getSpectatorKey(std::string summonerId)
{
	std::string fakeSpectatorKey =
		"{\"gameId\": 2923525050,\"gameStartTime\" : 1543807986486,\"platformId\" : \"NA1\",\"gameMode\" : \"ARAM\",\"mapId\" : 12,\"gameType\" : \"MATCHED_GAME\",\"gameQueueConfigId\" : 450,\"observers\" : {\"encryptionKey\": \"0sb+CTNaHuFmGJjAz/V0NbRS2rKYojWt\"},\"participants\" : [{\"profileIconId\": 3809,\"championId\" : 91,\"summonerName\" : \"GOAT LEBRON\",\"gameCustomizationObjects\" : [],\"bot\" : false,\"perks\" : {\"perkStyle\": 8100,\"perkIds\" : [8128,8143,8138,8135,8009,8014,5008,5008,5001],\"perkSubStyle\": 8000},\"spell2Id\": 4,\"teamId\" : 100,\"spell1Id\" : 32,\"summonerId\" : 23271105}]";
	return fakeSpectatorKey;
}
std::string FakeRequestInterface::getFeaturedGames()
{
	std::string fakeSpectatorKey = "\"clientRefreshInterval\": 300,\"gameList\" : [{\"gameId\": 2923525050,\"gameStartTime\" : 1543807986486,\"platformId\" : \"NA1\",\"gameMode\" : \"ARAM\",\"mapId\" : 12,\"gameType\" : \"MATCHED_GAME\",\"gameQueueConfigId\" : 450,\"observers\" : {\"encryptionKey\": \"0sb+CTNaHuFmGJjAz/V0NbRS2rKYojWt\"},\"participants\" : [{\"profileIconId\": 3809,\"championId\" : 91,\"summonerName\" : \"GOAT LEBRON\",\"gameCustomizationObjects\" : [],\"bot\" : false,\"perks\" : {\"perkStyle\": 8100,\"perkIds\" : [8128,8143,8138,8135,8009,8014,5008,5008,5001],\"perkSubStyle\": 8000},\"spell2Id\": 4,\"teamId\" : 100,\"spell1Id\" : 32,\"summonerId\" : 23271105}]]";
	return fakeSpectatorKey;
}

// Match functions
std::string FakeRequestInterface::getMatchFromMatchId(std::string matchId)
{
	std::string fakeMatchData =
		"{\"seasonId\": 11,\"queueId\" : 450,\"gameId\" : 2923475897,\"participantIdentities\" : [{\"player\": {\"currentPlatformId\": \"NA1\",\"summonerName\" : \"BreadBlast\",\"matchHistoryUri\" : \"/v1/stats/player_history/NA1/240512252\",\"platformId\" : \"NA1\",\"currentAccountId\" : 240512252,\"profileIcon\" : 3382,\"summonerId\" : 89031620,\"accountId\" : 240512252},\"participantId\": 1}";
	return fakeMatchData;
}
std::string FakeRequestInterface::getMatchListForAccount(std::string accountId)
{
	std::string fakeMatchList =
		"{\"matches\": [{\"lane\": \"TOP\",\"gameId\" : 2923475897,\"champion\" : 103,\"platformId\" : \"NA1\",\"timestamp\" : 1543805816080,\"queue\" : 450,\"role\" : \"DUO_SUPPORT\",\"season\" : 11},{\"lane\": \"TOP\",\"gameId\" : 2923466236,\"champion\" : 127,\"platformId\" : \"NA1\",\"timestamp\" : 1543803771326,\"queue\" : 450,\"role\" : \"DUO\",\"season\" : 11}";
	return fakeMatchList;
}
std::string FakeRequestInterface::getTimelineForMatch(std::string matchId)
{
	std::string fakeTimelineData =
		"{\"frames\": [{\"timestamp\": 0,\"participantFrames\" : {\"1\": {\"totalGold\": 1400,\"teamScore\" : 0,\"participantId\" : 1,\"level\" : 1,\"currentGold\" : 1400,\"minionsKilled\" : 0,\"dominionScore\" : 0,\"position\" : {\"y\": 1180,\"x\" : 1102},\"xp\" : 660,\"jungleMinionsKilled\" : 0}]";
	return fakeTimelineData;
}