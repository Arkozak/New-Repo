/* Andrew Kozak
09/16/2019
srtingStart*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

void required()
{
	string userStr;
	cout << "Enter a string:";

	getline(cin, userStr);

	cout << "The string entered was \"" << userStr << "\", and it's length is " << userStr.size() << " characters long" ;

}

void additionalOne()
{
	string userStr;

	cout << "Enter a string:";

	getline(cin, userStr);

	for (int x = 0; x < userStr.size(); x++)
	{
		cout << "#";
	}

}

void additionalTwo()
{
	string userStr;
	string tempStr;

	cout << "Enter a string:";

	getline(cin, userStr);
	tempStr = userStr;

	tempStr.resize(userStr.size());

	for (int x = 0; x < userStr.size() + 1; x++)
	{
		tempStr.at(x) = userStr.at(userStr.size() - 1); // fix me
	}

	cout << tempStr;
}



int main()
{
	required();

	cout << endl;

	additionalOne();

	

	return 0;
}