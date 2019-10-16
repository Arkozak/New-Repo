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
	vector<int> hidden;
	string guess;
	int x;

	int bulls = 0;
	int cows = 0;

	for (auto i = 0; i < 4; i++) //Creating hidden vector
	{
		hidden[i] = rand() % 10;
	}
	cout << hidden[0] << hidden[1] << hidden[2] << hidden[3];
	while (false)
	{
		cout << "Guess a 4 digit number: " << endl; //grabbing guess
		cin >> guess;

		for (auto i = 0; i < 4; i++)
		{
			switch (guess[i]) //first number
			{
			case '0':
				x = 0;
			case '1':
				x = 1;
			case '2':
				x = 2;
			case '3':
				x = 3;
			case '4':
				x = 4;
			case '5':
				x = 5;
			case '6':
				x = 6;
			case '7':
				x = 7;
			case '8':
				x = 8;
			case '9':
				x = 9;
			}

			for (auto j = 0; j < 4; j++)
			{
				if (x = hidden[j])
				{
					if (i == j)
					{
						bulls++;
					}
					else
					{
						cows++;
					}
				}
			}
		}
	}


	return 0;
}