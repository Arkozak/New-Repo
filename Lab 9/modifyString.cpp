/*	Andrew Kozak
	09/23/2019
	Lab 09 */

#include <iostream>
using std::cout;
using std::cin;
#include <string>
using std::string;

#include "modifyString.hpp"

int modifyString(string& userStr, int x)
{
		for (int i = 0; i < x; i++)
	{
		userStr.push_back('0');
	}

	return userStr.size();
}
