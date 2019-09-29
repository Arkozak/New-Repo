/* Andrew Kozak
09/16/2019
Source.cpp
This code asks the user to input 3 numbers then outputs them vertically*/


#include "intio.hpp"  // Header for this package
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;
using std::ostringstream;
#include <cstdlib>
using std::size_t;
#include <vector>
using std::vector;

int main()
{
	cout << "Input 3 numbers." << endl;

	vector<int> numbers;
	int fill;

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter a number: ";
		fill = getInt();
		numbers.push_back(fill);
	}

	for (int i = 0; i < 3; i++)
	{
		putInt(numbers.at(i), 10);
		cout << endl;
	}
	
	
	return 0;
}