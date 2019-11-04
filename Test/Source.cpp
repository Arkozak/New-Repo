#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using std::stringstream;
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

vector<string> boop()
{
	vector<string> names;
	string pulled;

	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a name: ";
		getline(cin, pulled);
		names.push_back(pulled);
	}

	return names;
}



void shoop(vector<string> x)
{
	vector<string> head = x;
	for (int i = 0; i < 10; i++)
	{
		cout << head.at(i) << endl;
	}

}


int plant()
{
	vector<string> green = boop();


	shoop(boop());
	return 0;
}

#ifndef MAIN_HPP_
#define MAIN_HPP_

#include <string>

struct Account
{
	std::string account;
	std::string accountPassword;
};

bool entrancekey(std::string password);

std::string asking(std::string password);






#endif MAIN_HPP_


#include "Main.hpp"
#include <iostream>
#include <string>

std::string asking(std::string password)
{
	std::cout << "Enter account that you would like the password to: ";
}

bool entrancekey(std::string password)
{
	if (password == "") //FIX ME
	{
		return 1;
	}

	return 0;
}
