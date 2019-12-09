/**
 * @file     lambdas.hpp
 * @author   Student Name
 * @date     Mar 21, 2019
 * John Quan
 *
 * Practice using lambda functions
 */

 /*
  * @file     lambdas.hpp
  * @author   Student Name
  * @date     Mar 21, 2019
  * John Quan
  *
  * Practice using lambda functions
  */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>
#include <string>

#include "lambdas.hpp"

int main() {

	// TODO: REQUIRED
	//       Create a vector<pair<size_t, string>> to enumerate
	//       each string in the WIKIPEDIA_CPP string vector.
	std::vector<std::pair<size_t, std::string>> v1;
	std::pair<size_t, std::string> filler;
	for (auto i : WIKIPEDIA)
	{
		filler.first = i.size();
		filler.second = i;
		v1.push_back(filler);
	}
	std::vector<std::pair<size_t, std::string>> v2;

	// TODO: REQUIRED
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the first member in descending order.
	std::sort(v1.begin(), v1.end(), [](std::pair<size_t, std::string> a , std::pair<size_t, std::string> b) {
		return a.first > b.first;
		});


	// TODO: REQUIRED
	//       Use printVectorPairs() to print the vector
	
	

	// TODO: ADDITIONAL 1
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the second member in ascending order.



	// TODO: ADDITIONAL 1
	//       Use printVectorPairs() to print the vector



	// TODO: ADDITIONAL 2
	//       Use std::find_if with a comparison lambda function that prints
	//       the vector pairs where the pair's second.length() > 15.
	//       Print the vector as described in the lab.



	return 0;
}