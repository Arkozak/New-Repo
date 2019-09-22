/* Andrew Kozak 
09/16/2019
name.cpp
This code takes the entered line, stitches all the letters to a set of 2 number,
then moved the first numeber to the back, then returns the numbers to letters
with the same letter-number scale*/

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::vector;
using std::string;

int names()
{
	vector<string> names;
	string pulled;
	string tempstr;
	string finalstr;
	int y = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a name: ";
		getline(cin, pulled);
		names.push_back(pulled);
	} //inputs names into vectors

	for (int i = 0; i < 10; i++)
	{
		pulled = names.at(0); //pulls out names one by one
		names.erase(names.begin());

		for (int x = 0; x < pulled.size(); x++) //takes out all the spaces
		{
			if (pulled.at(x) == ' ')
			{
				pulled.erase(x, 1);
			}
		}

		for (int x = 0; x < pulled.size(); x++)
		{
			switch (pulled.at(x))
			{
			case 'a':
				tempstr.push_back('0');
				tempstr.push_back('0');
				break;
			case 'b':
				tempstr.push_back('0');
				tempstr.push_back('1');
				break;
			case 'c':
				tempstr.push_back('1');
				tempstr.push_back('0');
				break;
			case 'd':
				tempstr.push_back('1');
				tempstr.push_back('1');
				break;
			case 'e':
				tempstr.push_back('0');
				tempstr.push_back('2');
				break;
			case 'f':
				tempstr.push_back('1');
				tempstr.push_back('2');
				break;
			case 'g':
				tempstr.push_back('2');
				tempstr.push_back('0');
				break;
			case 'h':
				tempstr.push_back('2');
				tempstr.push_back('1');
				break;
			case 'i':
				tempstr.push_back('2');
				tempstr.push_back('2');
				break;
			case 'j':
				tempstr.push_back('0');
				tempstr.push_back('3');
				break;
			case 'k':
				tempstr.push_back('1');
				tempstr.push_back('3');
				break;
			case 'l':
				tempstr.push_back('2');
				tempstr.push_back('3');
				break;
			case 'm':
				tempstr.push_back('3');
				tempstr.push_back('0');
				break;
			case 'n':
				tempstr.push_back('3');
				tempstr.push_back('1');
				break;
			case 'o':
				tempstr.push_back('3');
				tempstr.push_back('2');
				break;
			case 'p':
				tempstr.push_back('3');
				tempstr.push_back('3');
				break;
			case 'q':
				tempstr.push_back('0');
				tempstr.push_back('4');
				break;
			case 'r':
				tempstr.push_back('1');
				tempstr.push_back('4');
				break;
			case 's':
				tempstr.push_back('2');
				tempstr.push_back('4');
				break;
			case 't':
				tempstr.push_back('3');
				tempstr.push_back('4');
				break;
			case 'u':
				tempstr.push_back('4');
				tempstr.push_back('0');
				break;
			case 'v':
				tempstr.push_back('4');
				tempstr.push_back('1');
				break;
			case 'w':
				tempstr.push_back('4');
				tempstr.push_back('2');
				break;
			case 'x':
				tempstr.push_back('4');
				tempstr.push_back('3');
				break;
			case 'y':
				tempstr.push_back('4');
				tempstr.push_back('4');
				break;
			case 'z':
				tempstr.push_back('0');
				tempstr.push_back('0');
				break;
			default:
				break;

			}
		}//changes the entered string to a set of numbers

		y = tempstr.size() / 2;
		tempstr.push_back(tempstr.at(0));
		tempstr.erase(0, 1);

		for (int x = 0; x < y; x++)
		{
			switch (tempstr.at(0))
			{
			case '0':
				switch (tempstr.at(1))
				{
				case '0':
					finalstr.push_back('a');
					break;
				case '1':
					finalstr.push_back('b');
					break;
				case '2':
					finalstr.push_back('e');
					break;
				case '3':
					finalstr.push_back('j');
					break;
				case '4':
					finalstr.push_back('q');
					break;
				}
				break;
			case '1':
				switch (tempstr.at(1))
				{
				case '0':
					finalstr.push_back('c');
					break;
				case '1':
					finalstr.push_back('d');
					break;
				case '2':
					finalstr.push_back('f');
					break;
				case '3':
					finalstr.push_back('k');
					break;
				case '4':
					finalstr.push_back('r');
					break;
				}
				break;
			case '2':
				switch (tempstr.at(1))
				{
				case '0':
					finalstr.push_back('g');
					break;
				case '1':
					finalstr.push_back('h');
					break;
				case '2':
					finalstr.push_back('i');
					break;
				case '3':
					finalstr.push_back('l');
					break;
				case '4':
					finalstr.push_back('s');
					break;
				}
				break;
			case '3':
				switch (tempstr.at(1))
				{
				case '0':
					finalstr.push_back('m');
					break;
				case '1':
					finalstr.push_back('n');
					break;
				case '2':
					finalstr.push_back('o');
					break;
				case '3':
					finalstr.push_back('p');
					break;
				case '4':
					finalstr.push_back('t');
					break;
				}
				break;
			case '4':
				switch (tempstr.at(1))
				{
				case '0':
					finalstr.push_back('u');
					break;
				case '1':
					finalstr.push_back('v');
					break;
				case '2':
					finalstr.push_back('w');
					break;
				case '3':
					finalstr.push_back('x');
					break;
				case '4':
					finalstr.push_back('y');
					break;
				}
				break;
			}
			tempstr.erase(0, 2);
		}

		cout << finalstr << endl;
		tempstr.clear();
		finalstr.clear();

	}

	return 0;
}