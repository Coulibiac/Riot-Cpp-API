#ifndef JSON_PARSER_H
#define JSON_PARSER_H

#include "CurlRequestInterface.h"
#include <rapidjson/document.h>
#include <map>
#include <iostream>
#include <stdio.h>

using namespace rapidjson;

class JsonParser
{
public:
	JsonParser();
	~JsonParser();

	std::map<std::string, std::string> parseMasterIds(const std::string masterList);

private:
	Document document;
};


#endif