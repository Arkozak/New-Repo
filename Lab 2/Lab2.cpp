/**
* countingLoop.cpp
* Andrew Kozak
* 09/06/2019
* This program asks the user a number then creates a diamond of pound signs using a bunch of while loops
*/

#include <iostream>
using std::cout;
using std::endl;

void counting()
{
	int x = 1;

	while (x <= 20)
	{
		cout << x << " ";
		x = x + 1;
	}
}

void box()
{
	int x = 0;
	int y = 0;

	while (x < 10)
	{
		while (y < 60)
		{
			cout << "~";
			y = y + 1;
		}
		cout << endl;
		y = 0;
		x = x + 1;
	}

} 

void betterBox()
{
	int x = 0;
	int y = 0;

	while (x < 10)
	{
		if ((x % 2) == 0)
		{
			while (y < 30)
				{
					cout << "~@";
					y = y + 1; 
				}
		}
		else
		{
			while (y < 30)
			{
				cout << "@~";
				y = y + 1;
			}
		}
		cout << endl;
		y = 0;
		x = x + 1;
	}
}

int main()
{
	cout << "Lab 2 part 1" << endl;

	counting();

	cout << endl << endl;

	cout << "Lab 2 part 2" << endl;

	box();

	cout << endl << endl;

	cout << "Lab 2 part 3" << endl;

	betterBox();

	return 0;
}