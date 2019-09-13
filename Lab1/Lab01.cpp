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
	int x;													//given number
	cout << "Type an integer ";								//Asks for number
	cin >> x;												//Grabs number from user
	x = x + 1;												//Adds 1 to the user's number
	cout << (x * x) << " is " << x << " squared " << endl;	//Outputs the final number

	return 0;
}