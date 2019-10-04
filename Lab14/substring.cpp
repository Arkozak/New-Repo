//
//
//
//

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

#include <string>
using std::string;
using std::getline;



int main()
{
	string boop;
	string loop; 
	int x = 0;
	int y = 0;

	cout << "Enter a string: ";
	cin >> boop;
	y = boop.size();

	for (int i = 0; i < y; i++)
	{
		loop.push_back(' ');
	}

	for (int i = 0; i <= y/2; i++)
	{
		cout << loop.substr(0, i);
		cout << boop.substr(i, y - 2 * i) << endl;
	}
}