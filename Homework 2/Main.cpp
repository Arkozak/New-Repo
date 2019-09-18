/* Andrew Kozak
09/16/2019
Main.cpp*/

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::vector;
using std::string;

void names()
{
	vector<string> names;
	string pulled;

	for (int i = 0; i < 10; i++)
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
}

int main()
{
	names();
}