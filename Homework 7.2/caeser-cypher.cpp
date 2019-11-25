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
	if ((filler[0] != '-') && (isdigit(filler[0]) == false))
	{
		return false;
	}
	for (int i = 1; i < filler.size(); i++)
	{
		if (isdigit(filler[i]) == false)
		{
			return false;
		}
	}
	return true;
}



int caesar()
{
	string userin = " ";
	string filler;
	int x;
	int shift = 0;
	
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

		
		for (int i = 0; i < userin.size(); i++)
		{
			x = userin[i];
			if (isupper(userin[i]))
			{
				x = x + shift;
				if (x > 90)
				{
					userin[i] = x - 26;
				}
				else if (x < 65)
				{
					x = x - shift * 2;
					userin[i] = 158 - x;
				}
				else
				{
					userin[i] = x;
				}
			}
			if (islower(userin[i]))
			{
				x = x + shift;
				if (x > 122)
				{
					userin[i] = x - 26;
				}
				else if (x < 97)
				{
					x = x - shift * 2;
					userin[i] = 222 - x ;
				}
				else
				{
					userin[i] = x;
				}
			}
		}
		
		
		cout << "Result: " << userin << "\n\n";
		
		shift = 0;

	}
}