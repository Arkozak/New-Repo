
#include "Simulation.hpp"
#include "Agent.hpp"
#include "Enviroment.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int temp = 69;
	int thermo = 69;
	Simulation sim(temp, thermo);

	while (true)
	{
		sim.askOwner();
		sim.run();
	}
}