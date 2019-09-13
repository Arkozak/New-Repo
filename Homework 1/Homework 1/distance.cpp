/**
* distance.cpp
* Andrew Kozak
* 09/12/2019
* This program converts miles to kilometers
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int distance()
{
	int x = 0;

	cout << "Give a distance you want changed from miles to kilometers: ";

	cin >> x;

	cout << endl << "The given distance in kilometers is :" << x * 1.609 << "km";

	return 0;
}