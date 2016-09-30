// 11_01-Basic Inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

class Person {
public:
	std::string m_name;
	int m_age;

	Person(std::string name = "", int age = 0)
		:m_name(name), m_age(age) {}

	std::string getName() const { return m_name; }
	int getAge() const { return m_age; }

};

class BaseballPlayer : public Person{
public:
	double m_battingAverage;
	int m_homeRuns;

	BaseballPlayer(double battingAverage = 0.0, int homeRuns = 0)
		: m_battingAverage(battingAverage), m_homeRuns(homeRuns) {}
};

class Employee :public Person {
public:
	double m_hourlySalary;
	long m_employeeID;

	Employee(double hourlySalary, long employeeID)
		: m_hourlySalary(hourlySalary), m_employeeID(employeeID) {}

	void printNameAndSalary()const {
		std::cout << m_name << ": $" << m_hourlySalary << '\n';
	}
};

class Supervisor :public Employee {
public:
	// This supervisor can oversee a maximum of [] employees
	long m_overseesIDs[5];
};

int main()
{
	BaseballPlayer Joe;
	Joe.m_name = "Joe";
	Employee Frank(20.25, 12345);
	Frank.m_name = "Frank";

	Frank.printNameAndSalary();
    return 0;
}