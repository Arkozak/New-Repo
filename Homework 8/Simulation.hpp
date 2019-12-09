
#ifndef Simulation_hpp
#define Simulation_hpp

#include "Agent.hpp"
#include "Enviroment.hpp"

class Simulation
{
	Enviroment env;
	Agent age;
public:
	int temp;
	int thermo;
	void run();
	void askOwner();
};
#endif