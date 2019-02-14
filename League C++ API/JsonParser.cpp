#include "JsonParser.h"
#include "LeaguePlayer.h"

JsonParser::JsonParser()
{
}

JsonParser::~JsonParser()
{
}

std::map<std::string, std::string> JsonParser::parseMasterIds(const std::string& masterList)
{
	std::map<std::string, std::string> masterIds;

	if (masterList != "")
	{
		const char *masterListC = masterList.c_str();
		if (!document.Parse(masterListC).HasParseError())
		{
			rapidjson::Value& entries = document["entries"];
			for (rapidjson::SizeType i = 0; i < entries.Size(); i++)
			{
				//std::cout << entries[i]["summonerName"].GetString() << std::endl;
				masterIds.emplace(entries[i]["summonerName"].GetString(), std::to_string(entries[i]["leaguePoints"].GetInt()));
				//masterIds.emplace(entries[i]["playerOrTeamName"].GetString(), entries[i]["playerOrTeamId"].GetString());
			}
		}
		else
		{
			std::cout << "Could not parse master list for IDs.";
		}
	}

	return masterIds;
}

std::vector<LeaguePlayer> JsonParser::returnAllPlayers(const std::string & masterList)
{
	std::vector<LeaguePlayer> rtnVec;
	if (masterList != "")
	{
		const char *masterListC = masterList.c_str();
		if (!document.Parse(masterListC).HasParseError())
		{
			rapidjson::Value& entries = document["entries"];
			for (rapidjson::SizeType i = 0; i < entries.Size(); i++)
			{
				rtnVec.emplace_back(entries[i]["summonerName"].GetString(), entries[i]["summonerId"].GetString(),
					entries[i]["hotStreak"].GetBool(), entries[i]["veteran"].GetBool(),
					entries[i]["wins"].GetUint(), entries[i]["losses"].GetUint(), entries[i]["leaguePoints"].GetUint());
			}
		}
		else
		{
			std::cout << "Could not parse master list for IDs.";
		}
	}
	return rtnVec;
}

