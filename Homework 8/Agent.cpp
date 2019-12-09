#include "Agent.hpp"

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
	else
	{
		change = 0;
	}
}

void Agent::act(Enviroment env)
{
	if (change != 0)
	{
		env.heat(change);
	}
}