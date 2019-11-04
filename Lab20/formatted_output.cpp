//Andrew Kozak
//10/21/2019
//CS201
//Lab 20
//formatted_output.cpp
//This code outputs the cos of 0-180 by 5 including stream manipulators and compound assignment operators

#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
#include <iomanip>


int main()
{	
	
	

	for (auto i = 0; i <= 180; i += 5)
	{
		std::cout << std::setw(3) << std::right << i;
		std::cout << " ";
		std::cout << std::setw(11) << std::fixed << std::right << std::setprecision(8) << cos(i * M_PI / 180);
		std::cout << std::endl;
	}

}