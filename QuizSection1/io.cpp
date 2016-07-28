#include "stdafx.h"
#include <iostream>

using namespace std;

int readNumber() {
	int userNumber = 0;

	// Prompt user for an integer
	cout << "Enter an integer value: ";
	cin >> userNumber;
	cout << endl;

	return userNumber;
}
void writeAnswer(int userValue) {
	cout << "Total: " << userValue << endl;
}