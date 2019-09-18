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

	int x = userStr.size();
	tempStr.resize(x);

	while (x > 0)
	{
		tempStr.at(x - 1) = userStr.at(userStr.size() - x);
		x = x - 1;
	}

	cout << tempStr;
}



int main()
{
	required();

	cout << endl;

	additionalOne();

	cout << endl;

	additionalTwo();

	return 0;
}