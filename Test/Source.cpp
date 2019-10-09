#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using std::stringstream;
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

vector<string> boop()
{
	vector<string> names;
	string pulled;

	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a name: ";
		getline(cin, pulled);
		names.push_back(pulled);
	}

	return names;
}



void shoop(vector<string> x)
{
	vector<string> head = x;
	for (int i = 0; i < 10; i++)
	{
		cout << head.at(i) << endl;
	}

}


int plant()
{
	vector<string> green = boop();


	shoop(boop());
	return 0;
}

