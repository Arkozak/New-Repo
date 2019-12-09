
#ifndef Enviroment_hpp
#define Enviroment_hpp




class Enviroment
{
	int temp;
	int change;

public:
	Enviroment();
	Enviroment(int temp);
	int gettemp();
	void getchange(int c);

	void iteration();
};

#endif