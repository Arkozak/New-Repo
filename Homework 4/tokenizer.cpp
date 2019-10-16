

#include "tokenizer.hpp"

int main()
{
	vector<string> tokens;
	string str;
	int x = 0;

	cout << "Please enter some text.";
	cout << " To end type end." << endl;
	
	while (str != "end" && str != "END" && str != "End") //Grabing inputs
	{
		if (ReadLine(str) == true)
		{
			tokens.push_back(str);
			tokens.push_back("");
		}
	}
	
	x = StringToTokensWS(tokens); //Fixing vector to seperate everything

	AnalyzeTokens(tokens); //outputing everything and identifying stuff

	return 0; 
}