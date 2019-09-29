/* Andrew Kozak
myCode aka lab 8
9/20/2019
doInput calls get int and returns the value
compute returns the square number called to it */

#include "intio.hpp" 

int doInput()
{
	int x = 0;

	x = getInt();

	return x;
}

int compute(int a)
{
	int x = 0;

	x = a * a;

	return x;
}



