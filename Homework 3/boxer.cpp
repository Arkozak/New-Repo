

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;
using std::getline;

int boxer()
{

	string userInput; //Initializing the variables
	int x = 0;
	int length = 0;

	cout << "Enter a phrase: "; //Asking for numbers and phrase
	getline(cin, userInput);
	cout << "Enter size of border: ";
	cin >> x;

	while (x < 0) //In case x is a negative number
	{
		cout << "X must be positive, please enter a new x value: ";
		cin >> x;
	}

	length = x * 2 + userInput.size();

	for (int i = 1; i < 4; i++)
	{
		if (i % 2 == 1) //Tells if it is the rows of *'s or the string 
		{
			for (int i = 0; i < x; i++) // Top and bottom rows of box
			{
				for (int i = 0; i < length; i++)
				{
					cout << "*";
				}
				cout << endl;
			}
		}

		else //Tells if it is the rows of *'s or the string
		{
			for (int i = 0; i < 3; i++)
			{
				for (int i = 0; i < x; i++)
				{
					cout << "*";
				}

				if (i % 2 == 0)
				{
					for (int i = 0; i < userInput.size(); i++)
					{
						cout << " ";
					}
				}

				else
				{
					cout << userInput; 
				}

				for (int i = 0; i < x; i++)
				{
					cout << "*";
				}

				cout << endl;
			}
			
		}
	}




	return 0;


}
