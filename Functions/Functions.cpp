// Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void doPrint() {
	cout << "In doPrint()" << endl;
}

void returnNothing() {
	// This function returns nothing
}

int getValueFromUser() {
	cout << "Enter an Integer: ";
	int a;
	cin >> a;
	return a;
}

int return5() {
	return 5;	// Return the integer value 5
}

void printA() {
	cout << "A" << endl;
}

void printB() {
	cout << "B" << endl;
}

void printAB() {
	printA();
	printB();
}

int main()
{
	
	cout << "Starting main()" << endl;

	// doPrint(); // Part of initial functions
	printAB();

	cout << "Ending main()" << endl;
	

	/*
	cout << return5() << endl;	// Prints 5
	cout << return5() + 2 << endl;	// Prints 7

	returnNothing(); // Calls the funtion, displays nothing
	return5(); // Calls the function, displays nothing

	//cout << returnNothing(); // Funtion returns no value, line will not compile.
	*/

	/*
	int x = getValueFromUser(); // First call to funtions
	int y = getValueFromUser(); // Second call to function

	cout << x << " + " << y << " = " << x + y << endl;
	*/

	
	return 0;
}

