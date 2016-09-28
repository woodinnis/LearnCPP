// 10_03-Aggregation.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <string>
#include <iostream>
/*
class Teacher {
private:
	std::string m_name;

public:
	Teacher(std::string name) :m_name(name) {}

	std::string getName() { return m_name; }

};

class Department {
private:
	Teacher *m_teacher;

public:
	Department(Teacher *teacher = NULL) :m_teacher(teacher) {}
};

int main()
{
	// Create a new teacher outside the scope of the Department
	Teacher *teacher = new Teacher("Bob");	// Create a Teacher
	{
		//	Create a department and use the Constructor param to pass the teacher to it
		Department dept(teacher);

	}	//	dept goes out of scope

	// Teacher still exists because dept did not delete m_teacher

	std::cout << teacher->getName() << " still exists!\n";

	delete teacher;

    return 0;
}

*/