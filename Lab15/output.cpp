

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <sstream>
using std::stringstream;
#include "reading.hpp"


int output(string userStr)
{
	
	int x;
	stringstream numberfinder(userStr);
	numberfinder >> x;
	if (!numberfinder) 
	{
		cout << "No, you idiot! text needs an int!";
	}
	else
	{
		cout << "num is " << x << endl ;
	}

	return x;
}