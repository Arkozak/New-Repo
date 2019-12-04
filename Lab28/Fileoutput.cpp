#include <iostream>
#include <iomanip>
#include <fstream>

int main() {
	std::ofstream outputfile("output.txt");
	for (size_t a = 0; a < 10; a++)
	{
		for (int i = 1; i < 11; i++)
		{
			outputfile << std::setw(4) << (10 * a) + i;
		}
		outputfile << std::endl;
	}
	outputfile.close();
	return 0;
}
