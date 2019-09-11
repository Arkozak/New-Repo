/**
* FizzBuzz.cpp
* Andrew Kozak
* 09/11/2019
* This program counts to 100 and replaces each nummber divisible by 3 with fizz, by 5 with buzz, and by both with FizzBuzz
*/

#include <iostream>
using std::cout;
using std::endl;


int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			cout << "FizzBuzz" << endl;
		}

		else if ((i % 3) == 0)
		{
			cout << "Fizz" << endl;	
		}

		else if ((i % 5) == 0)
		{
			cout << "Buzz" << endl;
		}

		else
		{
			cout << i << endl;
		}
	}
	return 0;
}