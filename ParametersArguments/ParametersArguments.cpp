// ParametersArguments.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// Function declarations
void doPrint();
void printValue(int x);
int add(int x, int y);
int multiply(int x, int y);
int doubleNumber(int x);

int main()
{
	int x,y,z;

	// Prompt user for two integer values
	cout << "Enter the first Integer: ";
	cin >> x;
	cout << "Enter the second Integer: ";
	cin >> y;

	cout << "Your integers added together equal " << add(x, y) << endl;	// Output integers added
	cout << "Your first integer doubled equals " << doubleNumber(x) << endl; // Output x * 2
	cout << "Your second integer doubled equals " << doubleNumber(y) << endl; // Output y * 2
	cout << "Your integers multiplied together equal " << multiply(x, y) << endl;	// Output integers muliplied
	
	//printValue(x);

    return 0;
}

