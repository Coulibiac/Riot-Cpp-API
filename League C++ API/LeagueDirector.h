#ifndef LEAGUE_DIRECTOR_H
#define LEAGUE_DIRECTOR_H

#include <string>
#include <map>
#include <memory>

class HttpRequestInterface;
class JsonParser;

class LeagueDirector
{
public:

	LeagueDirector();

	~LeagueDirector();

	std::map<int, std::string> getChallengers();

	std::map<int, std::string> getMasters();

private:
	std::unique_ptr<HttpRequestInterface> requestInterface;
	std::unique_ptr<JsonParser> jsonParser;
};

#endif