// Andrew Kozak
// quad.cpp
// 9/29/2019
// This program does the quadratic formula.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cmath>
using std::sqrt;

int quad()
{
	double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;
	
	cout << "This code will help solve the quadratic formula." << endl;
	cout << "The format is a*x^2 + b*x + c = 0. " << endl;
	
	cout << "Value of a: ";
	cin >> a; 
	cout << "Value of b: ";
	cin >> b; 
	cout << "Value of c: ";
	cin >> c;
	
	if ((b * b - 4 * a * c) > 0)
	{
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		
		cout << "x = " << x1 << ", " << x2;
	}
	else
	{
		cout << "There are no real factors.";
	}
	return 0;
}