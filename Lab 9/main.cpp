/*	Andrew Kozak
	09/23/2019
	Lab 09 */


#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::getline;
using std::string;

#include "modifyString.hpp"

int main()
{

	string userInput;
	int x;

	cout << "Input a phrase: ";
	getline(cin, userInput);
	cout << "Input value: ";
	cin >> x;
	



	cout << "Length: " << modifyString(userInput, x) << endl;
	cout << "User string: " << userInput;

	return 0;
}