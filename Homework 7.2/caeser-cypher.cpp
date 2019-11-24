#include <iostream>
#include <string>
#include <sstream>
using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::string;
using std::stringstream;

bool isNumber(string filler)
{
	for (int i = 0; i < filler.size(); i++)
	{
		if (isdigit(filler[i]) == false)
		{
			return false;
		}
	}
	return true;
}



int main()
{
	string userin = " ";
	string filler;
	int shift = 0;
	char ch;
	cout << "Caesar Cypher\n\n";

	while (userin != "")
	{
		cout << "Enter a message to cypher (blank line to end): ";
		getline(cin, userin);
		if (userin == "")
		{
			return 0;
		}

		while (shift == 0)
		{
			cout << "Enter an integer to use as the shift: ";
			getline(cin, filler);

			if (isNumber(filler) == 1)
			{
				stringstream numberset(filler);
				numberset >> shift;
			}
			else
			{
				cout << "Error, userinput was not an integer.\n";
			}
		}

		
		
		cout << "Result: " << userin << "\n\n";
		


	}
}