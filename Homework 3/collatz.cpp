// Andrew Kozak
// quad.cpp
// 9/25/2019
// This program does the collatz formula.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int collatz()
{
	int x = 0;

	cout << "Enter a number to be collatzed: ";
	cin >> x;

	while (x < 1)
	{
		cout << "Please enter a positive integer: ";
		cin >> x;
	}

	cout << "The collatz sequence is: " << x << ", ";
	while (x > 1)
	{
		if (x % 2 == 1)
		{
			x = 3 * x + 1;
		}
		else
		{
			x = x / 2; 
		}

		cout << x << ", ";
	}
	

	return 0; 
	}