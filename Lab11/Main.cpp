// Andrew Kozak
// 9/27/2019
// Main.cpp
// CS201
// Identifies lowercase and uppercase characters in a string and outputs them 

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
	string userString;
	string finalStringa;
	string finalStringb;
	string finalStringc;
	char c;

	cout << "Enter a string: ";
	getline(cin, userString);

	for (auto i = 0; i < userString.size(); i++)
	{
		c = userString[i];

		if (c >= 'a' && c <= 'z')
		{
			finalStringa.push_back(c);
		}
		else if (c >= 'A' && c <= 'Z')
		{
			finalStringb.push_back(c);
		}
		else
		{
			finalStringc.push_back(c);
		}
	}

	cout << finalStringa << endl;
	cout << finalStringb << endl;
	cout << finalStringc << endl;

	return 0;
}