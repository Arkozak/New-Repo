/**
* greatest.cpp
* Andrew Kozak
* 09/11/2019
* This program asks the user a number until they enter a number less than or equal to 0 then outputs the greatest
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int greatest()
{
	int x = 1; //Initializing my variables
	int y = 0;

	while (x > 0) //Creating a loop until the user enters 0 
	{
		cout << "Enter a positive integer (0 to end): "; //Asks for number
		cin >> x;
		cout << endl;

		if (x > y) //Setting y to biggest number
		{
			y = x;
		}
	}

	cout << "The greatest number entered: " << y; //Final output

	return 0;
}