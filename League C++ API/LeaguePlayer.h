#pragma once
#ifndef LEAGUE_PLAYER_H
#define LEAGUE_PLAYER_H

#include <string>

class LeaguePlayer
{
public:
	LeaguePlayer(std::string name, std::string summId, bool onHotStreak, bool isVeteran, unsigned int wins, unsigned int losses, unsigned int leaguePoints);

	~LeaguePlayer();

	void dumpInfo();

private:
	std::string name;
	std::string summId;
	
	bool onHotStreak;
	bool isVeteran;

	unsigned int wins;
	unsigned int losses;
	unsigned int leaguePoints;
};

#endif