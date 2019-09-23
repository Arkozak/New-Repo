/* Andrew Kozak
09/16/2019
Main.cpp*/

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::vector;
using std::string;
using std::pow;

void namesMachOne()
{
	vector<string> names;
	string pulled;

	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a name: ";
		getline(cin, pulled);
		names.push_back(pulled);
	}

	cout << "Enter a name to see if it is in the list: ";
	getline(cin, pulled);

	int count = 0;

	for (int x = 0; x < 10; x++)
	{
		if (pulled == names.at(x))
		{
			count = count + 1;
		}
	}

	cout << "The name is in the list " << count << " times";
}

void namesMachTwo()
{
	vector<string> names;
	string pulled;

	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a name: ";
		getline(cin, pulled);
		names.push_back(pulled);
	}

	for (int i = 0; i < 10; i++)
	{
		cout << names.at(i) << endl;
	}

}

void namesMachThree()
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
}

void moneyMath()
{
	double x = 0;
	double y = 0;
	vector<double> money;
	money.resize(5);

	for (int i = 0; i < 5; i++)
	{
		switch (i)
		{
		case 0:
			cout << "Input penny count: ";
			break;
		case 1:
			cout << "Input nickel count: ";
			break;
		case 2:
			cout << "Input dime count: ";
			break;
		case 3:
			cout << "Input quarter count: ";
			break;
		case 4:
			cout << "Input one-dollar coin count: ";
			break;
		}

		cin >> x;
		money.at(i) = x;
		
	}

	for (int i = 0; i < 5; i++)
	{
		x = money.at(i);

		cout << "You have " << x;
		
		switch (i)
		{
		case 0:
			y = y + x / 100.0;
			if (x == 1)
			{
				cout << " penny." << endl;
			}
			else
			{
				cout << " pennies." << endl;
			}
			break;
		case 1:
			y = y + x * 5.0 / 100.0;
			if (x == 1)
			{
				cout << " nickle." << endl;
			}
			else
			{
				cout << " nickles." << endl;
			}
			break;
		case 2:
			y = y + x * 10.0 / 100.0;
			if (x == 1)
			{
				cout << " dime." << endl;
			}
			else
			{
				cout << " dimes." << endl;
			}
			break;
		case 3:
			y = y + x * 25.0 / 100.0;
			if (x == 1)
			{
				cout << " quarter." << endl;
			}
			else
			{
				cout << " quarters." << endl;
			}
			break;
		case 4:
			y = y + x;
			if (x == 1)
			{
				cout << " one-dollar coin." << endl;
			}
			else
			{
				cout << " one-dollar coins." << endl;
			}
			break;
		}

		
	}
	cout << "You have $" << y;
}

void rice()
{
	int x = 0;
	int i = 1;
	double z = 0.0; 

	for (int y = 1; y <= 3; y++)
	{
		while (x < pow(1000,y))
		{
			x = x + pow(2, i);
			i = i + 1;
		}

		cout << "It would take " << i << " squares to reach at least " << pow(1000,y) << " grains of rice" << endl;
		x = 0;
		i = 0;
	}

	while (x < 2147483647)
	{
		x = x + pow(2, i);
		i = i + 1;
	}
	cout << "You could only account for " << i << " squares using an integer" << endl;
	
	i = 0;

	while (i < 64)
	{
		z = z + pow(2, i);
		i = i + 1;
	}
	cout << std::fixed << "You can account for all 64 squared using a double. As shown here: " << z;

}

int main()
{
	namesMachOne();

	namesMachTwo();

	namesMachThree();

	moneyMath();

	rice();

	return 0;
}