
#ifndef Simulation_hpp
#define Simulation_hpp

#include "Agent.hpp"
#include "Enviroment.hpp"

class Simulation
{
	Enviroment Env;
	Agent Age;

public:
	Simulation();
	Simulation(int t, int th);
		
	void run();
	void askOwner();
};
#endif