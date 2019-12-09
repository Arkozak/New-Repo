/**
 * @file     vector_manip_main.cpp
 * @author   Andrew Kozak
 * @version  Dec 8, 2019
 * Andrew Kozak
 *
 * Declare a vector of strings, initialize it using an initializer
 * list (braces-based initialization), and print it—neatly—using
 * a range-based for-loop.
 */

#include <iostream>
#include <vector>



int main() {

	std::cout << "-------------------Required--------------------------"
		<< std::endl;
	//TODO Declare a vector of strings named "words"
	std::vector<std::string> words
	{
	"poo",
	"Finn",
	"is",
	"not",
	"extremly",
	"handsome"
	};
	//TODO REQUIRED Print original words with a range-based for loop.
	//     Access each string by-reference and make it constant.

	for (auto i : words)
	{
		std::cout << i << std::endl;
	}

	return 0;
}