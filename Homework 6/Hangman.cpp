
#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::map;

int notmain()
{
	map <string, string> man
	{
		{"Head", "filler"},
		{"Body", "filler" },
		{"Right Arm", "filler" },
		{"Left Arm", "filler" },
		{"Right Leg", "filler" },
		{"Left Leg", "filler"},
		{"Right Hand", "filler" },
		{"Left Hand", "filler" },
		{"Right Foot", "filler" },
		{"Left Foot", "filler" }
	};

	string hidden = "calculating";
	string game = "blank";
	string guess = "blank";
	cout << "Hangman is the game, you have 10 attempts to guess the letters in the word.\n";
	cout << "_ _ _ _ _ _ _ _ _ _ _";

	while (game == "over")
	{
		cout << "Enter a letter: ";
		cin >> guess;
	}
		


	return 0;
}