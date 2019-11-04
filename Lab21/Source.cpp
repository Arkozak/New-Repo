#include "truncstruct.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;

int main()
{
	StringInfo filler;
	cout << "Enter a string: ";
	getline(cin, filler.str);
	cout << "Enter a number: ";
	cin >> filler.len;

	cout << trunc(filler).str;
}