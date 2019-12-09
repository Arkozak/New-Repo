
#ifndef Agent_hpp
#define Agent_hpp

#include "Enviroment.hpp"

class Agent
{
	int temp;
	int thermo;
	int change;
	
public: 
	int getchange();
	int getthermo();
	void setthermo(int th);
	Agent();
	Agent(int t, int th);

	void preceive(Enviroment env);
	void think();
	void act(Enviroment& env);

};

#endif
