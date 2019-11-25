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


int nonmain() {
	
	Image3 image(0, 0);
	if (image.loadPPM("parrot.ppm")) {
		std::cout << "Image loaded!" << std::endl;
		image.printASCII(cout);
	}
	else {
		std::cout << "Image failed to load!" << std::endl;
	}

	return 0;
}
