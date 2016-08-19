// BreakAndContinue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int sum = 0;

	for (int count = 0; count < 10; ++count) {
		cout << "Enter a number to add, or 0 to exit: ";
		int num;
		cin >> num;

		if (num == 0)
			break;

		sum += num;
	}

	cout << "The sum of all the number you've entered is: " << sum << "\n";

    return 0;
}