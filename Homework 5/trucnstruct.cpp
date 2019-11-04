#include "truncstruct.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;
#include <cctype>
using std::toupper;


StringInfo trunc(const StringInfo& stringInfo) {
	// Get input string & maxlen
	string s = stringInfo.str;
	auto maxlen = stringInfo.len;
	if (maxlen < 0) {
		maxlen = 0;
	}
	// Truncate string & get its new length
	s = s.substr(0, maxlen);
	auto len = (s.size());

	// Convert string to upper-case
	for (std::size_t i = 0; i < len; ++i) {
		s[i] = char(toupper(s[i]));
	}
	// Create return value
	return StringInfo{ s, len };
}

StringInfo trunc8(const string& str) {

	return trunc(StringInfo{ str, 8 });
}

