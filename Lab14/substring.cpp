//
//
//
//

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;



int main()
{
	cout << "Type an integer: ";
	string line;
	string boop;
	getline(cin, line); // Input a line
	istringstream instream(line);
	int num;
	instream >> boop >> num; // Read number from line
	if (!instream) // Error check
	{
		cout << "No, you idiot! Type an INTEGER!";

	}
	cout << num;
}