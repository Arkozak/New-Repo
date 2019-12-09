// printtime.cpp  INCOMPLETE
// Glenn G. Chappell
// 20 Apr 2018
//
// For CS 201 Spring 2018
// Time of Day Class & Program
//
// Modified 11/28/18 for CS 201 Fall 2018
// Chris Hartman

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


// Class Time
// Holds a time of day: hours, minutes, seconds. Can print its stored
// time in a nice format.
class Time {

public:
	// ***** Time: constructors *****
	Time() {
		_hr = 5;
		_min = 2;
		_sec = 30;
	}
		// TODO: Put something here!

	// ***** Time: general public member functions *****

	void print() 
	{
		cout << "random time I decided to put NOT THE REAL TIME: "
			<< _hr << ":" << _min << ":" << _sec;
	}

	// ***** Time: data members *****
private:

	int _hr;   // Hours past midnight
	int _min;  // Minutes past the hour
	int _sec;  // Seconds past the minute

};  // End class Time


int main()
{
	// Print header
	cout << "Here are some times:" << endl;
	cout << endl;

	// Make a Time object; print it
	const Time t1;
	cout << "Time #1: [";
	t1.print();
	cout << "]" << endl;
	cout << endl;

	// Wait for user
	cout << "PRESS ENTER to quit ";
	while (cin.get() != '\n');
}
