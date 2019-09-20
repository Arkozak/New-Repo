
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int money()
{
	int x = 0;
	vector<int> money;

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
		money.push_back(i) = x;
		cout << money.at(i);
	}
	

	return 0;
}