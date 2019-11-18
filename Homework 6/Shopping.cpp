/*
Andrew Kozak
SHopping.cpp
11/17/2019
CS201
This program was created to mimic a shopping expirience
*/

#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip>
#include <string>
#include <numeric>

using std::cout;
using std::map;
using std::string;
using std::getline;
using std::string;
using std::cin;

//item cost and amount 
struct item
{
	double cost;
	int units;
};

//this function allows you to view your cart
void viewcart(const map<string, item>& shoppingcart)
{
	cout << "You have: \n";
	for (auto i : shoppingcart)
	{
		cout << i.second.units << " " << i.first << "\n";
	}
}

//this funciton allows you to add an item to the cart
void additem(map<string, item>& shoppingcart, map<string, item>& products)
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

				shoppingcart[userin].units++;
			}
			else {
				shoppingcart.insert({ userin,{products[userin].cost, 1}});
			}
		}
	}
	else 
	{
		cout << "Item not found\n";
	}
}

//this function allows you to remove an item from the cart
void removeitem(map<string, item>& shoppingcart, map<string, item>& products)
{
	string userin;
	cout << "What item would you like to remove from cart? ";
	cin >> userin;

	if (shoppingcart.find(userin) != shoppingcart.end()) {

		if (shoppingcart[userin].units <= 0)
		{
			cout << "There is no " << userin << " in your cart.\n";
		}
		else
		{
			shoppingcart[userin].units--;

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

//this item allows you to view the total cost of your cart
void totcost(const map<string, item>& shoppingcart, map<string, item>& products)
{
	/*double x = std::accumulate(std::begin(shoppingcart), std::end(shoppingcart), 0.0,
		[](const double &value, const std::map<std::string, item>::value_type& p)
		{ return value + p.second.cost; }
	);
		*/
	double x = std::accumulate(std::begin(shoppingcart),
		std::end(shoppingcart),
		0.0,
		[](const double& value, const std::map<std::string, item>::value_type& p) {
			return value + p.second.units * p.second.cost;
		}
	);

	std::cout << x << std::endl;
	
}

//this item allows you to view what is being sold
void show(const map<string, item>& products)
{
	for (auto i : products)
	{
		cout << i.first << " cost $" << std::setprecision(2) << std::fixed << i.second.cost << ", amount left: " << i.second.units << "\n";
	}
}

int main()
{
	int x = 0;
	int units = 10;
	
	std::map<std::string, item> products
	{
		{"Milk", {4.30, units}},
		{"Tea", {2.40, units}},
		{"Onion", {0.99, units}},
		{"Chocolate", {1.30, units}},
		{"Goldfish", {5.00, units}}
	};

	map<string, item> shoppingcart;
	
	while (x != 5)
	{
		cout << "Would you like to view cart(0), ";
		cout << "add item(1), remove item(2), view cost(3), \nview products for sale (4) or exit(5) ";
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
			totcost(shoppingcart, products);
		}
		else if (x == 4)
		{
			show(products);
		}
		else if (x == 5)
		{
			cout << "Bye.";
			return 0;
		}
		else
		{
			cout << "Input invalid\n";
		}
		cout << "\n";
	}
}