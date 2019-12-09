
#ifndef Agent_hpp
#define Agent_hpp

#include "Enviroment.hpp"
#include "Simulation.hpp"

class Agent
{
	int temp;
	int thermo;
	int change;
	Enviroment env;
public: 
	void preceive(Enviroment);
	void think();
	void act(Enviroment);

};

#endif
