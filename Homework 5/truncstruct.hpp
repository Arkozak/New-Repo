#ifndef FILE_TRUNCSTRUCT_HPP_INCLUDED
#define FILE_TRUNCSTRUCT_HPP_INCLUDED

#include <string>


struct StringInfo {
	std::string str;
	std::size_t len;
};


StringInfo trunc(const StringInfo& stringInfo);


StringInfo trunc8(const std::string& str);

#endif 
#pragma once
