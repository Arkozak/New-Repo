
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
	vector<string> filler;

	getline(cin, userStr);
	x = userStr.size();
	
	for (int i = 0; i < x; i++)
	{
		if (userStr[i] == ' ')
		{
			for (int y = 0; y < i; y++)
			{
				tempStr.push_back(userStr[y]);
			}
			userStr.erase(userStr.begin(), userStr.begin() + i);
		}
		filler.push_back(tempStr);
		tempStr.clear();
	}
	
}