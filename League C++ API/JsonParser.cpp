#include "JsonParser.h"

JsonParser::JsonParser()
{
	requestInterface = std::make_unique<CurlRequestInterface>();
}

JsonParser::~JsonParser()
{
}

std::map<std::string, std::string> JsonParser::parseMasterIds(const std::string masterList)
{
	std::map<std::string, std::string> masterRoles;

	if (masterList != "")
	{
		const char *masterListC = masterList.c_str();
		if (!document.Parse(masterListC).HasParseError())
		{
			//TODO
		}
	}

	return masterRoles;
}

