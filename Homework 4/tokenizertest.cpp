
#include "tokenizer.hpp"

bool ReadLine(string & str)
{
	
	getline(cin, str);
	if (str.empty())
	{
		return false;
	}
	else
	{
		return true;
	}
}

unsigned StringToTokensWS(vector<string>& tokens)
{
	int x = 0;
	int y = tokens.size();
	string temp;
	vector<string> tempvector = tokens;
	tokens.clear();

	for (auto i = 0; i < y; i++)
	{
		if (tempvector[i] != "")
		{
			istringstream iss(tempvector[i]);

			while (temp != "")
			{
				iss >> temp;
				tokens.push_back(temp);
			}
		}
		else
		{
			tokens.push_back("");
		}

		x++;
	}
}