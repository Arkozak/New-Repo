

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <sstream>
using std::istringstream;
#include "reading.hpp"


int output(string userStr)
{
	
	int x = 0;
	string boop;
	istringstream instream(userStr);
	
	
	if (isdigit(userStr.at(0)))
	{
		instream >> x;
		
	}
	else
	{
		instream >> boop >> x;
	}

	cout << "num is " << x << endl;


	
	



	return x;
}