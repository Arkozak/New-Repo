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

void additem(map<string, int>& shoppingcart, map<string, item>& products)
{
	string userin;
	cout << "What item would you like to add to cart? ";
	cin >> userin;

	if (products.find(userin) != products.end()) {
		
		if (products[userin].units <= 0)
		{
			cout << "There is no more " << userin << "\n";
		}
		else
		{
			products[userin].units--;

			if (shoppingcart.find(userin) != shoppingcart.end()) {

				shoppingcart[userin]++;
			}
			else {
				shoppingcart.insert({ userin,1 });
			}
		}
	}
	else 
	{
		cout << "Item not found\n";
	}
}

void removeitem(map<string, int>& shoppingcart, map<string, item>& products)
{
	string userin;
	cout << "What item would you like to remove from cart? ";
	cin >> userin;

	if (shoppingcart.find(userin) != shoppingcart.end()) {

		if (shoppingcart[userin] <= 0)
		{
			cout << "There is no " << userin << " in your cart.\n";
		}
		else
		{
			shoppingcart[userin]--;

			if (products.find(userin) != products.end()) {

				products[userin].units++;
			}
		}
	}
	else
	{
		cout << "There is no " << userin << " in your cart.\n";
	}
}

void pay(const map<string, int>& shoppingcart, const map<string, item>& products)
{

}

int main()
{
	int x = 0;
	int units = 1;
	
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
			additem(shoppingcart, products);
		}
		else if (x == 2)
		{
			removeitem(shoppingcart, products);
		}
		else if (x == 3)
		{
			pay(shoppingcart, products);
		}
		else if (x == 4)
		{
			cout << "Bye.";
			return 0;
		}
		else
		{
			cout << "Input invalid\n";
		}
	}
}