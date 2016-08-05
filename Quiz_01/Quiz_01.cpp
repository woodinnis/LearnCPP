// Quiz_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double dFirstValue(0.0);
	double dSecondValue(0.0);
	char cOperation(NULL);

	cout << "Enter a double value: ";
	cin >> dFirstValue;
	cout << "Enter a second double value: ";
	cin >> dSecondValue;
	cout << "Enter one of +, -, *, /: ";
	cin >> cOperation;

	if (cOperation == '+')
		cout << dFirstValue << " + " << dSecondValue << " is " << dFirstValue + dSecondValue;
	else if (cOperation == '-')
		cout << dFirstValue << " - " << dSecondValue << " is " << dFirstValue - dSecondValue;
	else if (cOperation == '*')
		cout << dFirstValue << " * " << dSecondValue << " is " << dFirstValue * dSecondValue;
	else if (cOperation == '/')
		cout << dFirstValue << " / " << dSecondValue << " is " << dFirstValue / dSecondValue;

	cout << "\n";
    return 0;
}

