/*
asciiart.cpp
Andrew Kozak
Nov 24, 2019
This program greates ascii "art" of stuff
 */

#include <iostream>
#include <vector>
#include <fstream>

#include "Color3.hpp"
#include "Image3.hpp"

using std::cout;
using std::cin;
using std::endl;

using std::ifstream;
using std::ofstream;

int main() {

	Image3 image(0, 0);

	std::string input_path = "parrot.ppm";
	std::string output_path = "test.ppm";
	std::string ascii_output_path = "ascii.txt";

	ifstream inp(input_path);

	if (!inp) 
	{
		cout << "no input\n";
	}
		
	inp >> image;
	inp.close();

	ofstream outp(output_path);
	if (!outp) 
	{
		cout << "no output\n";
	}

	outp << image;
	outp.close();
		
	ofstream out(ascii_output_path);
	if (!out) 
	{
		cout << "no output\n";
	}
	
	image.printASCII(out);
		
}



