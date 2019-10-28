
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;
#include <map>
using std::map;

int main()
{
	map<int, string> myMap;
	int x = 0;
	string userinput;

	for (auto i = 0; i < 5; i++)
	{
		cout << "Enter a string: ";
		cin >> userinput;
		cout << "Enter a number: ";
		cin >> x;

		myMap[x] = userinput;
	}
	
	myMap.erase(x);

	for (auto  i : myMap)
	{
		cout << i.first << ':' << i.second  << std::endl;
	}
	
}