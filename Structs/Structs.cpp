// Structs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct Employee {
	string firstName = "";
	string lastName = "";
	short id = 0;
	int age = 0;
	double wage = 0.0;
};

void assignEmployee(Employee employee) {
	
	cout << "Enter Employee's first name: ";
	cin >> employee.firstName;

	//cout << "Enter Employee's last name: ";
	//getline(cin,employee.lastName);
/*
	cout << "Enter Employee's ID number: ";
	cin >> employee.id;

	cout << "Enter Employee's age: ";
	cin >> employee.age;

	cout << "Enter Employee's wage: $";
	cin >> employee.wage;
*/
}


void displayEmployeeInfo(Employee employee) {

	cout << "Employee Name: " << employee.firstName << " " << employee.lastName << endl;
	//cout << "Employe ID: " << employee.id << endl;
	//cout << "Employee Age: " << employee.age << endl;
	//cout << "Employee Wage: " << employee.wage << endl;
}


int main()
{
	static Employee Joe;		// Create an Employee struct for Joe
	static Employee Frank;		// Create an Employee struct for Frank

	assignEmployee(Joe);
	//assignEmployee(Frank);

	cout << Joe.firstName;

//	displayEmployeeInfo(Joe);
	//displayEmployeeInfo(Frank);

    return 0;
}

