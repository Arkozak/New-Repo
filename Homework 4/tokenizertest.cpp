
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
		if (tempvector[i] != "")					//Seperating strings
		{
			istringstream iss(tempvector[i]);

			while (iss)
			{
				iss >> temp;
				tokens.push_back(temp);
				x++;
			}
			tokens.back() = "";
		}
		
	}
	
	tokens.pop_back(); //Fixing the vector
	x--;
	return x;
}

void AnalyzeTokens(const vector<string>& tokens)
{
	int x = 0;
	string temp;

	for (auto i = 0; i < tokens.size(); i++)
	{
		temp = tokens[i];												//Grabs First Line

		if (temp[0] == '\"' && temp.back() == '\"')						//If it is a string
		{
			cout << "[string] \t \"" << temp << "\"" <<endl;
		}
		else if (temp == "")											//If it is whitespace			
		{
			cout << "[whitespace] \t \"\"" << endl;
		}
		else if (isdigit(temp[0]))										//If it is a number
		{
			for (auto i = 0; i < temp.size(); i++)
			{
				if (isdigit(temp[i]))
				{
					x++;
				}
			}
			
			if (x == temp.size())
			{
				cout << "[integer] \t \"" << temp << "\"" << endl;
			}
			else
			{
				cout << "[other] \t \"" << temp << "\"" << endl;
			}
				
		}
		else if (islower(temp[0]))										
		{
			for (auto i = 0; i < temp.size(); i++)
			{
				if (isalpha(temp[i]) || isdigit(temp[i]) || temp[i] == '_')
				{
					x++;
				}
			}

			if (x == temp.size())
			{
				cout << "[identifier] \t \"" << temp << "\"" << endl;
			}
			else
			{
				cout << "[other] \t \"" << temp << "\"" << endl;
			}

		}
		else															//ANYTHING ELSE
		{
			cout << "[other] \t \"" << temp << "\"" << endl;
		}

		x = 0;
	}
}

