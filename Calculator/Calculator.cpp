// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int getUserInput();
int getMathematicalOperation();
int calculateResult(int valueOne, int userOperator, int valueTwo);
void printResult(int finalValue);

int main()
{
	int valueOne;
	int valueTwo;
	int userOperation;
	int totalValue;
	// Get first number from user
	valueOne = getUserInput();

	// Get mathmatical operation from user
	userOperation = getMathematicalOperation();

	// Get second number from user
	valueTwo = getUserInput();

	// Calculate result
	totalValue = calculateResult(valueOne, userOperation, valueTwo);

	// Print result
	printResult(totalValue);

    return 0;
}

int getUserInput() {

	int userValue;

	cout << "Enter an integer to be calculated: ";
	cin >> userValue;

	return userValue;
}

int getMathematicalOperation() {
	
	int userOperation;

	cout << "Choose an operation (1 +, 2 -, 3 *, 4 /): ";
	cin >> userOperation;

	return userOperation;
}

int calculateResult(int valueOne, int userOperator, int valueTwo) {

	if (userOperator == 1)	// Addition
		return valueOne + valueTwo;
	if(userOperator == 2)	// Subtration
		return valueOne - valueTwo;
	if(userOperator == 3)	// Multiplication
		return valueOne * valueTwo;
	if(userOperator == 4)	// Division
		return valueOne / valueTwo;

	return 0;
	
}

void printResult(int finalValue) {
	
	cout << "Total: " << finalValue << endl;
}