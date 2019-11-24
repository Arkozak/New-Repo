#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;

int main()
{
	cout << "Enter x: ";
	int x=0;

	while (x != 100)
	{
		if (x == 7 || x == 6)
		{
			return 0;
		}
		else
		{
			cout << "Wrong:";
			cin >> x;
		}
	}
	return 0;
}