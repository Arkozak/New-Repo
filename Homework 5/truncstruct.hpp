#ifndef FILE_TRUNCSTRUCT_HPP_INCLUDED
#define FILE_TRUNCSTRUCT_HPP_INCLUDED

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
#include <sstream>
using std::stringstream;

struct StringInfo {
	std::string str;
	std::size_t len;
};


StringInfo trunc(const StringInfo& stringInfo);


StringInfo trunc8(const std::string& str);

#endif 
#pragma once
