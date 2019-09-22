
#include <iostream>
#include <vector>


using std::cout;
using std::cin;
using std::endl;
using std::vector;


int money()
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
	return 0;
}