
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <random>
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;

bool notin(string numbers, string guess) //Checks if the digit is already been added to the hidden number
{
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] == guess[0])
		{
			return 0;
		}
	}

	return 1;
}

bool iscow(string number, string guess, int x) //Determine if a cow exists
{
	for (int i = 0; i < number.size(); i++)
	{
		if (x != i)
		{
			if (guess[i] == number[x])
			{
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> distrib1(0, 9);

	string number = "";
	string guess;
	int x = 0;

	int bulls = 0;
	int cows = 0;

	for (auto i = 0; i < 4; i++) //Creating hidden vector
	{
		guess = std::to_string(distrib1(gen));
		if (notin(number, guess) == 1)
		{
			number = number + guess;
		}
		else
		{
			i = i - 1;
		}
	}

	while (true)
	{
		cout << "Guess a 4 digit number: " << endl; //grabbing guess
		cin >> guess;

		for (int i = 0; i < 4; i++)
		{
			if (guess[i] == number[i])
			{
				bulls++;
			}
			else if(iscow(number ,guess ,i))
			{
				cows++;
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

