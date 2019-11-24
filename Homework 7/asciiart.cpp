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
  Color3 myColor(38, 232, 12);
  ofstream fout ("testfile.txt");
  if (!fout) {
    cout << "error opening file" << endl;
    // something here to close the file or stop it from being used
  }
  fout << myColor;
  fout.close();
  ifstream fin ("testfile.txt");
  if (!fin) {
    cout << "error opening file for fin" << endl;
    // ensure program stops
    return 0;
  }
  fin >> myColor;
  cout << myColor << ' ' << myColor.asciiValue() << ' ' << myColor.weightedSum() << std::endl;
  fin.close();

  Image3 image(0, 0);
  image.loadPPM("parrot.ppm");
  cout << image << std::endl;

  return 0;
}