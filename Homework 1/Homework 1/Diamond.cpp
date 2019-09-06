/**
* Lab01.cpp
* Andrew Kozak
* 09/04/2019
* This program asks the user a number then adds one and returns it squared
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
	cout << "Enter a number ";
	cin >> dSize;
	while (x <= dSize)
	{

		while (y < x)
		{
			cout << "#";
			y = y + 1;
		}
		y = 0;
		cout << endl;
		x = x + 1;
	}

}
