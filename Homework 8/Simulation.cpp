#include "Simulation.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
using std::getline;

void Simulation::run()
{
	for (int i = 0; i < 10; i++)
	{
		age.preceive(env);
		age.think();
		age.act(env);

		env.iteration();
	}
}

void Simulation::askOwner()
{
	string boop;
	cout << "The temp of the room is set to: " << temp << " degrees." << endl;
	cout << "The thermostat of the room is set to: " << thermo << " degrees." << endl;

	cout << "Would you like to change the thermostat? (Y/N)";
	getline(cin, boop);

	if (boop[0] == 'Y')
	{
		cout << "What would you like to change the thermostat to?";
		cin >> thermo;
	}
	else
	{
		cout << "OK" << endl;
	}
}