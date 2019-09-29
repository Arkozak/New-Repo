#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

int boxprint(string userInput, int x)
{
	int length = 0;

	length = x * 2 + userInput.size();

	for (int i = 1; i < 4; i++)
	{
		if (i % 2 == 1) //Tells if it is the rows of *'s or the string 
		{
			for (int i = 0; i < x; i++) // Top and bottom rows of box
			{
				for (int i = 0; i < length; i++)
				{
					cout << "*";
				}
				cout << endl;
			}
		}

		else //Tells if it is the rows of *'s or the string
		{
			for (int i = 0; i < 3; i++)
			{
				for (int i = 0; i < x; i++)
				{
					cout << "*";
				}

				if (i % 2 == 0)
				{
					for (int i = 0; i < userInput.size(); i++)
					{
						cout << " ";
					}
				}

				else
				{
					cout << userInput;
				}

				for (int i = 0; i < x; i++)
				{
					cout << "*";
				}

				cout << endl;
			}

		}
	}
}