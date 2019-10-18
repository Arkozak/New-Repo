#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <sstream>
using std::istringstream;
#include <string>
using std::getline;
using std::string;
#include <vector>
using std::vector;


#pragma once
#ifndef FILE_TOKENIZER_HPP
#define FILE_TOKENIZER_HPP

bool ReadLine(string & str);
unsigned StringToTokensWS(vector<string>& tokens);
void AnalyzeTokens(const vector<string>& tokens);




#endif
