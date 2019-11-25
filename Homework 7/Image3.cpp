// Image3.hpp
// Implementation for Image3 class
// Original Author: Jonathan Metzgar
// CS 201 course
#include "Image3.hpp"

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
		Color3 color_temp(0, 0, 0);
		return Color3();
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
	outp.close();
	return false;
}

bool Image3::loadPPM(const std::string& path) {
	// TODO: Load an image from the disk
	// REQUIREMENT: Use the STREAM operators for the file contents
	std::ifstream inp(path);
	if (!inp)
	{
		return false;
	}
	return true;
}


void Image3::printASCII(std::ostream& ostr) const {
	// TODO: Print an ASCII version of this image
	ostr << "P3\n";
	ostr << w << " " << h << "\n";
	ostr << 255;

	for (size_t i = 0; i < pixels.size(); i++)
	{
		ostr << pixels[i].asciiValue();

		if (i != 0 && i % w == 9) 
		{
			ostr << "\n";
		}
	}
}

// STREAM OPERATORS for IMAGE3 class

std::ostream& operator<<(std::ostream& ostr, const Image3& image) {
	// TODO: Write out PPM image format to stream
	// ASSUME FORMAT WILL BE GOOD
	ostr << "P3\n" << image.w << ' ' << image.h << "\n255";
	for (Color3 px : image.pixels)
	{
		ostr << '\n' << px;
	}
	return ostr;
}

std::istream& operator>>(std::istream& istr, Image3& image) {
	// TODO: Read in PPM image format from stream
	// MAKE SURE FORMAT IS GOOD!!!
	int first_three_vals = 0;

	while (true) {
		std::string line;
		std::getline(istr, line);

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
			std::istringstream instr_wh(line);

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
			std::istringstream instr_maxval(line);

			if (!instr_maxval)
				return istr;

			// Can consider making the #define MAXVAL here instead something pulled from the value below
			int maxval;
			instr_maxval >> maxval;


			first_three_vals++;
			continue;
		}

		std::istringstream instr_rgb(line);
		int temp_r;
		int temp_g;
		int temp_b;

		std::cout << "check: " << line << std::endl;
		for (int i = 0; i < 3; i++) {
			instr_rgb >> temp_r;
			instr_rgb >> temp_g;
			instr_rgb >> temp_b;
		}

		image.pixels.push_back(Color3(temp_r, temp_g, temp_b));

	}

	return istr;