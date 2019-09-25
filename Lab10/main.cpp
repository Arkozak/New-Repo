// Andrew Kozak
// main.cpp
// 09/25/2019
// CS 201
// This code calls Divis3,cpp through the header file and then if Divis3 returns 1 it
// outputs the number if not then it outputs nothing


#include "stupidthing.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
	int a = 0;
	int b = 0;

	cout << "Enter a positive integer: ";
	cin >> a;

	while (a < 1)
	{
		cout << "Come on we all wanna get home please just enter a positive integer: ";
		cin >> a;
	}

	cout << "Enter a positive integer to see if the numbers are divisible by: ";
	cin >> b;

	while (a < 1)
	{
		cout << "Please just enter a positive integer: ";
		cin >> a;
	}

	for (int i = 1; i <= a; i++)
	{
		if (divis3(i,b) == 1)
		{
			cout << i << " is divisible by " << b << "." << endl;
		}
	}
	return 0;
}