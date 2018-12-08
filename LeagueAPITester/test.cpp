#include <iostream>
#include <stdio.h>
#include <vector>
#include <rapidjson/document.h>

using namespace rapidjson;

int main()
{
	const char summonerInfo[] = " {\n"
"    \"tier\": \"MASTER\",\n"
"    \"leagueId\": \"bb7f45c3-66d1-3b22-bc68-7a6c65b38c4e\",\n"
"    \"entries\": [\n"
"        {\n"
"            \"wins\": 617,\n"
"            \"losses\": 566,\n"
"            \"rank\": \"I\",\n"
"            \"playerOrTeamName\": \"Vakin\",\n"
"            \"playerOrTeamId\": \"41643804\",\n"
"            \"leaguePoints\": 0\n"
"        },\n"
"\t{\n"
"            \"wins\": 578,\n"
"            \"losses\": 531,\n"
"            \"rank\": \"I\",\n"
"            \"playerOrTeamName\": \"urelectric\",\n"
"            \"playerOrTeamId\": \"43588594\",\n"
"            \"leaguePoints\": 0\n"
"        }\n"
"    ]\n"
"}";

	Document document;

	if (document.Parse(summonerInfo).HasParseError())
	{
		return 1;
	}

	else
	{
		char buffer[sizeof(summonerInfo)];
		memcpy(buffer, summonerInfo, sizeof(summonerInfo));
		if (document.ParseInsitu(buffer).HasParseError())
		{
			return 1;
		}
	}

	printf("\nParsing to document succeeded.\n");

	//std::vector<std::string> listEntries;

	rapidjson::Value& entries = document["entries"];
	assert(entries.IsArray());

	for (rapidjson::SizeType i = 0; i < entries.Size(); i++)
		std::cout << entries[i]["playerOrTeamId"].GetString() << "\n";

	int test;
	std::cin >> test;
	return 0;
}