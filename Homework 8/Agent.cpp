#include "Agent.hpp"

Agent::Agent() :
	temp(69),
	change(0),
	thermo(69)
{}

Agent::Agent(int t, int th) :
	temp(t),
	change(0),
	thermo(th)
{}

void Agent::preceive(Enviroment env)
{
	temp = env.gettemp();
}

void Agent::think()
{
	if (temp < thermo)
	{
		change = 1;
	}
	else if (temp > thermo)
	{
		change = -1;
	}
	else if (temp == thermo)
	{
		change = 0;
	}
}

void Agent::act(Enviroment& env)
{
	env.getchange(change);
}

int Agent::getchange()
{
	return change;
}

void Agent::setthermo(int th)
{
	thermo = th;
}

int Agent::getthermo()
{
	return thermo;
}