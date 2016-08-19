// DoWhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	// Declare the condition variable outside the loop
	int selection;

	// The block executes at least once before ever checking the condition
	do {
		cout << "Please make a selection: \n";
		cout << "1) Addition\n";
		cout << "2) Subtraction\n";
		cout << "3) Multiplication\n";
		cout << "4) Division\n";
		cin >> selection;
	}
	// The condition is checked here
	while (selection != 1 && selection != 2 && selection != 3 && selection != 4);
    
	cout << "You selected option #" << selection << "\n";
	return 0;
}