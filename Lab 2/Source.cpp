/**
* countingLoop.cpp
* Andrew Kozak
* 09/06/2019
* This program counts to 20 using a while loop
*/

#include <iostream>
using std::cout;


int counting()
{
	int x = 1;

	while (x <= 20)
	{
		cout << x << " ";
		x = x + 1;
	}
	return 0;
}