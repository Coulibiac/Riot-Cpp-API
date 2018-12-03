#include <iostream>
#include <stdio.h>
#include <rapidjson/document.h>

using namespace rapidjson;

int main()
{
	const char summonerInfo[] = "{\n"
"    \"profileIconId\": 3791,\n"
"    \"name\": \"Wyntèr\",\n"
"    \"summonerLevel\": 124,\n"
"    \"accountId\": 232276261,\n"
"    \"id\": 73779900,\n"
"    \"revisionDate\": 1543799017000\n"
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

	printf("\nAccess values in document:\n");
	assert(document.IsObject());    // Document is a JSON value represents the root of DOM. Root can be either an object or array.

	assert(document.HasMember("name"));
	assert(document["name"].IsString());
	printf("name = %s\n", document["name"].GetString());

	int test;
	std::cin >> test;
	return 0;
}