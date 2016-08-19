// InputValidation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double getDouble() {
	while (1) {
		cout << "Enter a double value: ";
		double x;
		cin >> x;

		if (cin.fail()) {	// Has an extraction failed
			// Handle the failure
			cin.clear();	// Return to "normal" mode
			cin.ignore(32767, '\n');	// Clear the buffer
			cout << "Please try again!\n";
		}
		else {
			cin.ignore(32767, '\n');	// Clear the buffer
			return x;
		}
	}
}

char getOperator() {

	// Loop until input is valid
	while (1) {
		cout << "Enter one of the following: +, -, *. /: ";
		char op;
		cin >> op;
		cin.ignore(32767, '\n');	// Clear the buffer

		// Verify user input
		if (op == '+' || op == '-' || op == '*' || op == '/')
			return op;
		else
			cout << "Please try again!\n";
	}
}

void printResult(double x, char op, double y) {
	if (op == '+')
		cout << x << " + " << y << " is " << x + y << '\n';
	else if (op == '-')
		cout << x << " - " << y << " is " << x - y << '\n';
	else if(op == '*')
		cout << x << " * " << y << " is " << x * y << '\n';
	else if(op == '/')
		cout << x << " / " << y << " is " << x / y << '\n';

}
int main()
{
	double x = getDouble();
	char op = getOperator();
	double y = getDouble();

	printResult(x, op, y);

    return 0;
}

