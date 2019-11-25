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
	string userinput;
	
	
		//FIXME
		cin >> userinput;
		if (userinput == "Yes")
		{

			cout << "Adding password to database.\n";
		}
		else if (userinput == "no" || userinput == "No")
		{
			cout << "Taking you back to main page.\n";
		}
		else
		{
			cout << "Please enter yes or no.";
		}
}