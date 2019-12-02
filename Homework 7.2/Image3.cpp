// Image3.hpp
// Implementation for Image3 class
// Original Author: Jonathan Metzgar
// CS 201 course

#include "Image3.hpp"
#include <iostream>
#include <typeinfo>
#include <fstream>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::istringstream;

using std::ifstream;
using std::ofstream;

// Image3 Constructor
Image3::Image3(unsigned width, unsigned height) {
	// TODO: resize the pixels array
	// TODO: initialize the internal w and h members
	h = height;
	w = width;
	pixels.resize(width * height);
}

// Return a pixel from the image
const Color3& Image3::getPixel(unsigned x, unsigned y) const {
	// TODO: Add error handling for unknown pixels
	// TERRIBLE OPTION 1: throw
	// BETTER OPTION 2: return a color
	// Hint: maybe this is already in the class?
	if ((y * w + x) > pixels.size())
	{
		return pixels[0];
	}
	return pixels[y * w + x];
}

void Image3::setPixel(unsigned x, unsigned y, const Color3& color) {
	// TODO: Set the pixel to the new color
	pixels[y * w + x] = color;
}

bool Image3::savePPM(const std::string& path) const {
	// TODO: Save the image to the disk
	// REQUIREMENT: Use the STREAM operators for the file contents
	std::ofstream outp(path);
	if (!outp)
	{
		return false;
	}
	outp << *this;
	return true;
}

bool Image3::loadPPM(const std::string& path, std::string& file_contents) {
	// TODO: Load an image from the disk
	// REQUIREMENT: Use the STREAM operators for the file contents
	std::ifstream inp(path);
	if (!inp)
	{
		return false;
	}
	inp >> *this;
	return true;
}

void Image3::printASCII(std::ostream& ostr) const {
	// TODO: Print an ASCII version of this image

	for (size_t i = 0; i < pixels.size(); i++)
	{
		ostr << pixels[i].asciiValue();

		if ((i + 1) % w == 0 && i != 0)
		{
			ostr << "\n";
		}
	}
}

// STREAM OPERATORS for IMAGE3 class

std::ostream& operator<<(std::ostream& ostr, const Image3& image) {
	// TODO: Write out PPM image format to stream
	// ASSUME FORMAT WILL BE GOOD
	ostr << "P3\n";

	ostr << image.w << " " << image.h << "\n";

	for (size_t i = 0; i < image.pixels.size(); i++) {
		ostr << image.pixels[i] << "\n";
	}

	return ostr;
}

// When sending an input stream to an image object, format as follows
std::istream& operator>>(std::istream& istr, Image3& image) {
	// TODO: Read in PPM image format from stream
	// MAKE SURE FORMAT IS GOOD!!!

	int first_three_vals = 0;

	int temp_r = -1;
	int temp_g = -1;
	int temp_b = -1;

	while (true) {

		string line;
		getline(istr, line);

		if (!istr)
			break;

		if (line.at(0) == '#')
			continue;

		if (first_three_vals == 0) {
			if (line == "P3") {
				first_three_vals++;
				continue;
			}
			else {
				return istr;
			}
		}

		if (first_three_vals == 1) {
			int temp_w;
			int temp_h;
			istringstream instr_wh(line);

			if (!instr_wh)
				return istr;

			instr_wh >> temp_w;
			if (temp_w < 0)
				return istr;

			instr_wh >> temp_h;
			if (temp_h < 0)
				return istr;

			image.w = (unsigned)temp_w;
			image.h = (unsigned)temp_h;
			first_three_vals++;
			continue;
		}

		if (first_three_vals == 2) {
			istringstream instr_maxval(line);

			if (!instr_maxval)
				return istr;

			int maxval;
			instr_maxval >> maxval;


			first_three_vals++;
			continue;
		}

		istringstream instr_rgb(line);

		if (temp_r == -1) {
			instr_rgb >> temp_r;
		}
		else if (temp_g == -1 && temp_r != -1) {
			instr_rgb >> temp_g;
		}
		else if (temp_b == -1 && temp_r != -1 && temp_g != -1) {
			instr_rgb >> temp_b;

			image.pixels.push_back(Color3(temp_r, temp_g, temp_b));
		}

		if (temp_b != -1 && temp_r != -1 && temp_g != -1) {
			temp_r = -1;
			temp_g = -1;
			temp_b = -1;
		}
	}

	return istr;
}