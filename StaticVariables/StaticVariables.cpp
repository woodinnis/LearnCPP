// StaticVariables.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void incrementAndPrint() {

	int value = 1;			// Automatic duration variable, loses scope when function ends
	static int s_value = 1;	// Static variable, does not lose scope
	++value;
	++s_value;
	cout << value << endl;
	cout << s_value << endl;
}	// value is destroyed

int main()
{
	incrementAndPrint();
	incrementAndPrint();
	incrementAndPrint();

    return 0;
}

