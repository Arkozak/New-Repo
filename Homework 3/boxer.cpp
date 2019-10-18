// Andrew Kozak
// quad.cpp
// 9/23/2019
// This program create a box around a string.

#include "boxer.hpp"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;
using std::getline;

int main()
{

	string userInput; //Initializing the variables
	int x = 0;
	int length = 0;

	cout << "Enter a phrase: "; //Asking for numbers and phrase
	getline(cin, userInput);
	cout << "Enter size of border: ";
	cin >> x;

	while (x < 0) //In case x is a negative number
	{
		cout << "X must be positive, please enter a new x value: ";
	}

	boxprint(userInput, x);

	return 0;


}
