/**
* Lab2.cpp
* Andrew Kozak
* 09/09/2019
* This program counts to 20, makes a 60x10 box of ~, and makes a 60x10 box of alteranting ~ and @
*/

#include <iostream>
using std::cout;
using std::endl;

void counting() //Lab part A
{
	int x = 1;

	while (x <= 20) //Loops 20 times outputing whatever itteration it is on
	{
		cout << x << " ";
		x = x + 1;
	}
}

void box() //Lab part B
{
	int x = 0;
	int y = 0;

	while (x < 10) //The vertical peramiter for the box adding a new line once the horizontal loop is done
	{
		while (y < 60) //The horizontal peramiter for the box outputing 60 ~
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

	while (x < 10) //The vertical peramiter for the box adding a new line once the horizontal loop is done
	{
		if ((x % 2) == 0) //This if else statement makes each line alternating patterns
		{
			while (y < 30)
				{
					cout << "~@"; //The horizontal peramiter for the box outputing 30 ~@
					y = y + 1; 
				}
		}
		else
		{
			while (y < 30)
			{
				cout << "@~"; //The horizontal peramiter for the box outputing 30 @~
				y = y + 1;
			}
		}
		cout << endl;
		y = 0;
		x = x + 1;
	}
}

int main() //Calling all functions
{
	counting();

	cout << endl << endl;

	box();

	cout << endl << endl;

	betterBox();

	return 0;
}