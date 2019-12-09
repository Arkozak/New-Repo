
#ifndef Enviroment_hpp
#define Enviroment_hpp


#include "Agent.hpp"
#include "Simulation.hpp"

class Enviroment
{
	int temp;
	bool heat;

public:
	int gettemp();

	void iteration();
};

#endif