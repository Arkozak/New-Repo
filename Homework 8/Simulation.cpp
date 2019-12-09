#include "Simulation.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
using std::getline;

Simulation::Simulation() :
	Env(),
	Age()
{}

Simulation::Simulation(int t, int th) :
	Env(t),
	Age(t, th)
{}

void Simulation::run()
{
	for (int i = 0; i < 10; i++)
	{
		Age.preceive(Env);
		Age.think();
		Age.act(Env);

		Env.iteration();
	}
}

void Simulation::askOwner()
{
	string boop = "";
	int thermo;
	cout << "The temp of the room is set to: " << Env.gettemp() << " degrees." << endl;
	cout << "The thermostat of the room is set to: " << Age.getthermo() << " degrees." << endl;

	cout << "Would you like to change the thermostat? (Y/N): ";
	cin >> boop;

	if (boop == "Y")
	{
		cout << "What would you like to change the thermostat to? ";
		cin >> thermo;
		Age.setthermo(thermo);
	}
	else if (boop == "N")
	{
		cout << "OK" << endl;
	}
	
}