/* Andrew Kozak
09/22/2019
rice.cpp
This code counts a bunch of rice based off a story about an emporer and an inventor*/


#include <iostream>
using std::endl;
using std::cout;

int rice()
{
	int x = 0;
	int i = 1;
	double z = 0.0;

	for (int y = 1; y <= 3; y++)
	{
		while (x < pow(1000, y))
		{
			x = x + pow(2, i);
			i = i + 1;
		}

		cout << "It would take " << i << " squares to reach at least " << pow(1000, y) << " grains of rice" << endl;
		x = 0;
		i = 0;
	}

	while (x < 2147483647)
	{
		x = x + pow(2, i);
		i = i + 1;
	}
	cout << "You could only account for " << i << " squares using an integer" << endl;

	i = 0;

	while (i < 64)
	{
		z = z + pow(2, i);
		i = i + 1;
	}
	cout << std::fixed << "You can account for all 64 squared using a double. As shown here: " << z;

	return 0;
}