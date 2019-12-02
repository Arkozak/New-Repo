/*
rule30.cpp.cpp
Andrew Kozak
Nov 24, 2019
Creates the rule 30 cellular atomaton
 */

#include "Image3.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <fstream>
using std::ofstream;
#include <sstream>

int main(int argc, char** argv)
{
	ofstream myfile;
	myfile.open("rule30.txt");
	vector<int> rows;
	int a = 0;
	int b = 0;
	int c = 0;

	int w = 40;
	int h = 20;
	if (argc == 3) {
		std::istringstream wstr(argv[1]);
		wstr >> w;
		std::istringstream hstr(argv[2]);
		hstr >> h;
	}

	for (int i = 0; i < w; i++)
	{
		rows.push_back(0);
	}

	rows[rows.size() / 2] = 1;

	for (auto x : rows)
	{
		myfile << x;
	}
	myfile << endl;

	for (int y = 0; y < h - 1; y++)
	{
		for (int i = 0; i < rows.size(); i++)
		{
			if (i == 0)
			{
				a = 0;
				b = rows[i];
				c = rows[i + 1];
			}
			else if (i == rows.size() - 1)
			{
				a = b;
				b = rows[i];
				c = 0;
			}
			else
			{
				a = b;
				b = c;
				c = rows[i + 1];
			}

			if (a == 1)
			{
				if (b == 1)
				{
					if (c == 1)
					{
						rows[i] = 0;
					}
					else
					{
						rows[i] = 0;
					}
				}
				else
				{
					if (c == 1)
					{
						rows[i] = 0;
					}
					else
					{
						rows[i] = 1;
					}
				}
			}
			else
			{
				if (b == 1)
				{
					if (c == 1)
					{
						rows[i] = 1;
					}
					else
					{
						rows[i] = 1;
					}
				}
				else
				{
					if (c == 1)
					{
						rows[i] = 1;
					}
					else
					{
						rows[i] = 0;
					}
				}
			}
		}
		for (auto x : rows)
		{
			myfile << x;
		}
		myfile << endl;
	}

}