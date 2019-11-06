
#include <iostream>
#include <random>
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;

int main()
{
	int heads = 0;
	int tails = 0;
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> distrib1(1, 2);

	for (auto i = 0; i < 1000; i++)
	{
		int x = distrib1(gen);
		//std::cout << x;

		if (x == 1)
		{
			heads++;
		}
		if (x == 2)
		{
			tails++;
		}
	}
	std::cout << "Heads: " << heads << std::endl;
	std::cout << "Tails: " << tails;

}