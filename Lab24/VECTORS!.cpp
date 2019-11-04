

#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;

void printing(const vector<int> numbers)
{
	for (auto i : numbers)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

void sorting(vector<int>& numbers)
{
	std::sort(numbers.begin(), numbers.end());
	std::cout << "Sorting numerically and printing: " << std::endl;
	printing(numbers);
}

void reverse(vector<int>& numbers)
{
	std::reverse(numbers.begin(), numbers.end());
	std::cout << "Reversing the order: " << std::endl;
	printing(numbers);
}

void filling(vector<int>& numbers)
{
	std::fill(numbers.begin() + 2, numbers.end() - 2, 0);
	std::cout << "Filling some 0's into the vector: " << std::endl;
	printing(numbers);
}

void rotating(vector<int>& numbers)
{
	std::rotate(numbers.begin(), numbers.begin() + 2, numbers.end());
	std::cout << "Rotating the vector: " << std::endl;
	printing(numbers);
}

int main()
{
	vector<int> numbers = { 3, 5, 7, 1, 10, 6, 2, 12, 65, 7 };

	printing(numbers);

	rotating(numbers);
	
	sorting(numbers);

	reverse(numbers);

	filling(numbers);
}