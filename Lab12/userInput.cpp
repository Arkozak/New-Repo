
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

#include <vector>
using std::vector;

#include "userInput.hpp"

void getUserStrings(vector<string>& words)
{
	int x = 0;
	string tempStr;
	string userStr;
	string tempStr2;

	getline(cin, userStr);
	x = userStr.size();
	tempStr2 = userStr;

	for (int i = 0; i < x; i++)
	{
		if (userStr[i] == ' ')
		{
			for (int y = 0; y < i; y++)
			{
				tempStr.push_back(tempStr2[i]);
			}
			//FIX ME
		}
		
		words.push_back(tempStr);
		tempStr.clear();
	}
	
}