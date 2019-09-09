/**
* countingLoop.cpp
* Andrew Kozak
* 09/06/2019
* This program asks the user a number then creates a diamond of pound signs using a bunch of while loops
*/

#include <iostream>
using std::cout;


int main()
{
	int x = 1;

	while (x <= 20)
	{
		cout << x << " ";
		x = x + 1;
	}
	return 0;
}