/* Andrew Kozak 
09/16/2019
name.cpp*/

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::vector;
using std::string;

int names()
{
	vector<string> names;
	string pulled;

	for (int i = 0; i < 4; i++)
	{
		cout << "Enter a name: ";
		getline(cin, pulled);
		names.push_back(pulled);
	}

	cout << "Enter a name to see if it is in the list: ";
	getline(cin, pulled);

	int count = 0;

	for (int x = 0; x < 10; x++)
	{
		if (pulled == names.at(x))
		{
			count = count + 1;
		}
	}

	cout << "The name is in the list " << count << " times";

	return 0;
}