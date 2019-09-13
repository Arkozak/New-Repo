#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void diamond()
{
	int dSize;
	int x = 0;
	int y = 0;
	int z = 0;
	cout << "Enter a number ";
	cin >> dSize;


	while (x < dSize)  //Top half and middle of diamond
	{
		while (z < (dSize - x)) //Creates spaces before the diamond of pound signs
		{
			cout << " ";
			z = z + 1;
		}
		z = 0;


		while (y < (x * 2 - 1)) //Creates diamond of pound signs 
		{
			cout << "#";
			y = y + 1;
		}
		y = 0;
		cout << endl;
		x = x + 1;
	}


	while (x >= 0)
	{
		while (z < (dSize - x)) //Creates spaces before the diamond of pound signs
		{
			cout << " ";
			z = z + 1;
		}
		z = 0;


		while (y < (x * 2 - 1)) //Creates diamond of pound signs
		{
			cout << "#";
			y = y + 1;
		}
		y = 0;
		cout << endl;
		x = x - 1;
	}

	
}

void greatest()
{
	int x = 1; //Initializing my variables
	int y = 0;

	while (x > 0) //Creating a loop until the user enters 0 
	{
		cout << "Enter a positive integer (0 to end): "; //Asks for number
		cin >> x;
		cout << endl;

		if (x > y) //Setting y to biggest number
		{
			y = x;
		}
	}

	cout << "The greatest number entered: " << y; //Final output

}

void distance()
{
	int x = 0;

	cout << "Give a distance you want changed from miles to kilometers: ";

	cin >> x;

	cout << endl << "The given distance in kilometers is :" << x * 1.609 << "km";

}

int main()
{
	diamond();

	cout << endl;

	greatest();

	cout << endl;

	distance();

	return 0;
}