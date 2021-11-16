#pragma once
#include <map>
class jsonobject {
public:
	std::map<const char*, > values;
	jsonobject(const char* string);
	jsonobject();
	const char* getString(const char* key);
	int getInt(const char* key);
};