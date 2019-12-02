//Andrew Kozak
//CS201
//Flags.cpp
//12/2/2019

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

const int BOOTS = 1;
const int GLOVES = 2;
const int JACKET = 4;
const int SNOWPANTS = 8;
const int HAT = 16;
const int SCARF = 32;

void snowday(int gear)
{
	cout << "Gear that you need:";

	if ((gear & BOOTS) == 0)
		cout << " Boots";
	if ((gear & GLOVES) == 0)
		cout << " Gloves";
	if ((gear & JACKET) == 0)
		cout << " Jacket";
	if ((gear & SNOWPANTS) == 0)
		cout << " Snowpants";
	if ((gear & HAT) == 0)
		cout << " Hat";
	if ((gear & SCARF) == 0)
		cout << " Scarf";
	if (gear == 63)
		cout << " Nothing";
	cout << endl;
}

int main()
{
	cout << "Kid 1" << endl;
	snowday(HAT | SNOWPANTS | GLOVES);
	cout << endl;

	cout << "Kid 2" << endl;
	snowday(0);
	cout << endl;

	cout << "Kid 3" << endl;
	snowday(BOOTS | SNOWPANTS | SCARF | JACKET);
	cout << endl;

	cout << "Kid 4" << endl;
	snowday(HAT | SNOWPANTS | GLOVES | BOOTS | JACKET | SCARF);
	cout << endl;
}