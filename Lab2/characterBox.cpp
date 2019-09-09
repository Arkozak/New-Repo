/**
* characterBox.cpp
* Andrew Kozak
* 09/06/2019
* This program creates a box made of ~
*/

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int x = 0;
	int y = 0;

	while (x <= 8)
	{
		while (y <= 6)
		{
			cout << "~";
			y = y + 1;
		}
		cout << endl;
		y = 0;
		x = x + 1;
	}
	return 0;
}