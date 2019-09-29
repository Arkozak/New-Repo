// Andrew Kozak
// stupidthing.hpp
// 09/25/2019
// CS 201
// This determines if a value is divisable by another value then returns 1 or 0 based on if it is true or not

#include <iostream>

int divis3(int userNum, int otherUserNum)
{
	if (userNum % otherUserNum == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
