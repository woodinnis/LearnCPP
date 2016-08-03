// LocalScopeQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Enter an integer: ";
	int iValueOne;
	cin >> iValueOne;

	cout << "Enter a larger integer: ";
	int iValueTwo;
	cin >> iValueTwo;

	if (iValueTwo < iValueOne) {	
		// If the second value entered is smaller than the first swap the values
		int iTemp = iValueTwo;	// Create a temporary variable to hold the second value
		iValueTwo = iValueOne;
		iValueOne = iTemp;
	}

	// Display the values in order
	cout << "The smaller value is: " << iValueOne << endl;
	cout << "The larger value is: " << iValueTwo << endl;
	return 0;
}

