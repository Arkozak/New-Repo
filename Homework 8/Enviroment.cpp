
#include "Enviroment.hpp"
Enviroment::Enviroment() :
	change(0),
	temp(0)
{}

Enviroment::Enviroment(int t) :
	change(0),
	temp(t)
{}

int Enviroment::gettemp()
{
	return temp;
}

void Enviroment::iteration()
{
	temp = temp + change;
}

void Enviroment::getchange(int c)
{
	change = c;
}