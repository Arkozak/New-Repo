

#include "tokenizer.hpp"

int main()
{
	vector<string> tokens;
	string str;
	int x = 0;

	cout << "Please enter some text.";
	cout << "To end type end." << endl;
	
	while (str != "end" && str != "END" && str != "End")
	{
		if (ReadLine(str) == true)
		{
			tokens.push_back(str);
			tokens.push_back("");
		}
	}
	
	
}