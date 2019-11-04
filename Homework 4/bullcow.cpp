
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
	int x = 0;

	int bulls = 0;
	int cows = 0;

	for (auto i = 0; i < 4; i++) //Creating hidden vector
	{
		hidden.push_back(rand() % 10);
		
	}
	
	while (true)
	{
		cout << "Guess a 4 digit number: " << endl; //grabbing guess
		cin >> guess;

		for (auto i = 0; i < 4; i++)
		{
			switch (guess[i]) //first number
			{
			case '0':
				x = 0;
				break;
			case '1':
				x = 1;
				break;
			case '2':
				x = 2;
				break;
			case '3':
				x = 3;
				break;
			case '4':
				x = 4;
				break;
			case '5':
				x = 5;
				break;
			case '6':
				x = 6;
				break;
			case '7':
				x = 7;
				break;
			case '8':
				x = 8;
				break;
			case '9':
				x = 9;
				break;
			}
			
			for (auto j = 0; j < 4; j++) 
			{
				if (x == hidden[j])
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

		cout << "Bulls: " << bulls << endl;
		cout << "Cows: " << cows << endl;
		if (bulls == 4)
		{
			cout << "You win!";
			return 0;
		}
		bulls = 0;
		cows = 0;
	}


	return 0;
}