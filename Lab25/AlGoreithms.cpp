

#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using std::pair;

int main()
{
	vector<int> v1;
	vector<int> v2;
	int x = 0;
	
	for (auto i = 0; i < 5; i++)
	{
		std::cout << "Enter a number for vector 1:";
		std::cin >> x;
		v1.push_back(x);
	}

	for (auto i = 0; i < 5; i++)
	{
		std::cout << "Enter a number for vector 2:";
		std::cin >> x;
		v2.push_back(x);
	}

	auto filler = mismatch(v1.begin(), v1.end(), v2.begin());
	
	if (filler.first != v1.end())
	{
		std::cout << "There is a mismatch at: ";
		std::cout << *filler.first << " & " << *filler.second;
	}
	else
	{
		std::cout << "No mismatch.";
	}
	
}