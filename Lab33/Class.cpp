//Andrew Kozak
//Class.cpp
//11/20/2019
//THis code is to practice with classes

#include <iostream>
#include <string>

class myclass {
public:
	void setx()
	{
		std::cout << "Enter a value: ";
		std::cin >> x;
	}
	int getx() const {
		return x;
	}
	void sety()
	{
		std::cout << "Enter a value: ";
		std::cin >> y;
	}
	int gety() const {
		return y;
	}
	std::string toString() {
		return "x = " + std::to_string(getx()) + " , " + "y = " + std::to_string(gety());
	}
private:
	int x = 0;
	int y = 0;
};


int main()
{
	myclass boop;
	boop.setx();
	boop.sety();
	std::cout << boop.toString();
}