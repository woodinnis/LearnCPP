// SwitchStatements.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

enum Colors {
	COLOR_BLACK,
	COLOR_WHITE,
	COLOR_RED,
	COLOR_GREEN,
	COLOR_BLUE
};

void printColor(Colors color) {

	switch (color) {
		case COLOR_BLACK:
			cout << "Black";
			break;
		case COLOR_BLUE:
			cout << "Blue";
			break;
		case COLOR_GREEN:
			cout << "Green";
			break;
		case COLOR_RED:
			cout << "Red";
			break;
		case COLOR_WHITE:
			cout << "White";
			break;
		default:
			cout << "Unknown";
			break;
	}
}

int main()
{
	printColor(COLOR_GREEN);
    return 0;
}

