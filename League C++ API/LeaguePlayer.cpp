#include "LeaguePlayer.h"

#include <spdlog/spdlog.h>

LeaguePlayer::LeaguePlayer(std::string name, std::string summId, bool onHotStreak, bool isVeteran, unsigned int wins, unsigned int losses, unsigned int leaguePoints)
	: name(name), summId(summId), onHotStreak(onHotStreak), isVeteran(isVeteran), wins(wins), losses(losses), leaguePoints(leaguePoints)
{
}

LeaguePlayer::~LeaguePlayer()
{

}

void LeaguePlayer::dumpInfo()
{
	spdlog::info("Name: {}", name);
	spdlog::info("SummonerId: {}", summId);
	spdlog::info("Is on hot streak? : {}", onHotStreak);
	spdlog::info("Is veteran? : {}", isVeteran);
	spdlog::info("Wins: {}", wins);
	spdlog::info("Losses: {}", losses);
	spdlog::info("LP: {}", leaguePoints);
}