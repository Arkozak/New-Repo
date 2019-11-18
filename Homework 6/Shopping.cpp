#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip>
#include <string>

using std::cout;
using std::map;
using std::string;
using std::getline;
using std::string;
using std::cin;

struct item
{
	double cost;
	int units;
};

void viewcart(const map<string, int>& shoppingcart)
{
	cout << "You have: \n";
	for (auto i : shoppingcart)
	{
		cout << i.second << " " << i.first << "\n";
	}
}

int main()
{
	int x = 0;
	int units = 6;
	std::map<std::string, item> products
	{
		{"Milk", {4.30, units}},
		{"Tea", {4.30, units}},
		{"Onion", {4.30, units}},
		{"Chocolate", {4.30, units}},
		{"Goldfish", {4.30, units}}
	};

	map<string, int> shoppingcart;
	
	while (x != 4)
	{
		cout << "Would you like to view cart(0), ";
		cout << "add item(1), remove item(2), pay(3), or exit(4) ";
		cin >> x;
		
		if (x == 0)
		{
			viewcart(shoppingcart);
		}
		else if (x == 1)
		{
			
		}
		else if (x == 2)
		{

		}
		else if (x == 3)
		{

		}
		else if (x == 4)
		{

		}
		else
		{
			cout << "Input invalid\n";
		}
	}
}