
#ifndef FILE_STUDENT_HPP_INCLUDED
#define FILE_STUDENT_HPP_INCLUDED

#include <string>
#include <iostream>

class Student {
public:
	Student() {
		name = "Student name not found.";
		id = 0;
	}
	Student(std::string filler) {
		name = filler;
		id = rand() % 9000 + 1000;
	}
	Student(std::string filler, int x) {
		name = filler;
		id = x;
	}
	void printInfo() const {
		std::cout << "Name: " << name << std::endl;
		std::cout << "ID: " << id << std::endl;
	}

private:
	std::string name;
	int id;
};


#endif