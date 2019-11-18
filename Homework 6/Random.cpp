/*
Andrew Kozak 
Random.cpp
11/17/2019
CS201
This program randomly generates numbers in different ways 
between a range the user chooses and then outputs a histogram spread 
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>

//Generates a random number using uniform distribution
int RandomBetweenU(int first, int last) 
{
	std::random_device r;
	std::default_random_engine e1(r());
	std::uniform_int_distribution<int> x(first, last);
	return x(e1);
}

//Generates a random number using normal distribution
int RandomBetweenN(int first, int last) 
{
	std::random_device r;
	int mean = (first + last) / 2;
	std::seed_seq seed2{ r(), r(), r(), r(), r(), r(), r(), r() };
	std::mt19937 e2(seed2);
	std::normal_distribution<> normal_dist(mean, 2);
	int x = std::round(normal_dist(e2));
	return x;
}

//Generates a random number using rand()
int RandomBetween(int first, int last)
{
	int x = (rand() % (last - first + 1) + first);
	return x;
}

//Outputs the histogram
void PrintDistribution(const std::map<int,int> &numbers)
{
	for (auto p : numbers) {
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}
	std::cout << "\n\n";
}

int second()
{
	int x, y;
	std::cout << "Enter the lowest number you want to get: ";
	std::cin >> x;
	std::cout << "Enter the highest number you want to get: ";
	std::cin >> y;

	std::cout << "Uniform Distribution between " << x << " & " << y << "\n";
	std::map<int, int> numbersU;
	for (int n = 0; n < 10000; ++n) {
		++numbersU[RandomBetweenU(x, y)];
	}
	PrintDistribution(numbersU);

	std::cout << "Normal Distribution between " << x << " & " << y << "\n";
	std::map<int, int> numbersN;
	for (int n = 0; n < 10000; ++n) {
		++numbersN[RandomBetweenN(x, y)];
	}
	PrintDistribution(numbersN);

	std::cout << "Random Distribution between " << x << " & " << y << "\n";
	std::map<int, int> numbers;
	for (int n = 0; n < 10000; ++n) {
		++numbers[RandomBetween(x, y)];
	}
	PrintDistribution(numbers);

	return 0;
}