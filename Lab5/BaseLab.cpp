#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int x = 0;
	int y = 0;

	while (y == 0)
	{
		cout << "Input a number and the code will say if a number is divisibe by 2, 5, or both: ";
		cin >> x;

		switch (x % 10)
		{

		case 0:
			cout << "Both" << endl;
			break;

		case 5:
			cout << "Only by 5" << endl;
			break;

		case 2:
		case 4:
		case 6:
		case 8:
			if (x % 2 == 0)
			{
				cout << "Only by 2" << endl;
			}
			break;

		default:
			cout << "None" << endl;

		}
		
		cout <<  "If you want to continue enter 0: ";
		cin >> y;
	}

	return 0;

}