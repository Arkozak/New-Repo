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
	if (y * w + x > pixels.size())
	{
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

	std::string line;
	inp >> line;
	if (!inp || line != "P3") return false; // Invalid format
	pixels.clear(); // Empty the vector to add our data to.

	bool widthSet, heightSet, colorspaceSet = false;

	std::vector<int> rgb;

	while (true)
	{
		std::getline(inp, line);
		if (!inp)
		{
			return inp.eof();
		}
		if (line[0] == '#' || line == "") continue;
		std::istringstream str(line);
		while (str) 
		{
			int value;
			str >> value;
			if (!str) break;
			if (!widthSet) 
			{
				w = value;
				widthSet = true;
			}
			if (!heightSet)
			{
				h = value;
				heightSet = true;
			}
			if (!colorspaceSet)
			{
				colorspaceSet = true;
			}
			rgb.push_back(value);
			if (rgb.size() == 3) 
			{
				pixels.push_back(Color3(rgb[0], rgb[1], rgb[2]));
				rgb.clear();
			}
		}
	}
	return true;
}


void Image3::printASCII(std::ostream& ostr) const {
	// TODO: Print an ASCII version of this image
}

// STREAM OPERATORS for IMAGE3 class

std::ostream& operator<<(std::ostream& ostr, const Image3& image) {
	// TODO: Write out PPM image format to stream
	// ASSUME FORMAT WILL BE GOOD
	return ostr;
}

std::istream& operator>>(std::istream& istr, Image3& image) {
	// TODO: Read in PPM image format from stream
	// MAKE SURE FORMAT IS GOOD!!!
	return istr;
}