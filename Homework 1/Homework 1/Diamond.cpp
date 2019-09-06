/**
* diamond.cpp
* Andrew Kozak
* 09/06/2019
* This program asks the user a number then creates a diamond of pound signs using a bunch of while loops
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int dSize;
	int x = 0;
	int y = 0;
	int z = 0;
	cout << "Enter a number ";
	cin >> dSize;
	
	
	while (x < dSize)  //Top half and middle of diamond
	{
		while (z < (dSize - x)) //Creates spaces before the diamond of pound signs
		{
			cout << " ";
			z = z + 1;
		}
		z = 0;


		while (y < (x*2-1)) //Creates diamond of pound signs 
		{
			cout << "#";
			y = y + 1;
		}
		y = 0;
		cout << endl;
		x = x + 1;
	}


	while (x >= 0)
	{
		while (z < (dSize - x)) //Creates spaces before the diamond of pound signs
		{
			cout << " ";
			z = z + 1;
		}
		z = 0;


		while (y < (x * 2 - 1)) //Creates diamond of pound signs
		{
			cout << "#";
			y = y + 1;
		}
		y = 0;
		cout << endl;
		x = x - 1;
	}

	return 0;
}
