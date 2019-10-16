
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
	string userstr;
	getline(cin, userstr);
	string word;

	for (int i = 0; i < userstr.size(); i++)
	{
		if (word == "end")
		{
			i = userstr.size();
			word.clear();
		}
		else if (userstr[i] == ' ')
		{
			words.push_back(word);
			word = "";
		}
		else
		{
			word.push_back(userstr[i]);
		}
	}
	words.push_back(word);

}

