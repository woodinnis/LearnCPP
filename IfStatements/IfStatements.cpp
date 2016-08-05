// IfStatements.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool isEqual(int x, int y) {
	return(x == y);	// Returns true if x equals y, false if it does not.
}

int main()
{
	cout << "Enter an integer: ";
	int x;
	cin >> x;

	cout << "Enter another integer: ";
	int y;
	cin >> y;

	if (isEqual(x, y))
		cout << x << " and " << y << " are equal.";
	else
		cout << x << " and " << y << " are not equal.";

    return 0;
}

