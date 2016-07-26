// All the functions created during the Parameters & Arguments section

#include "stdafx.h"
#include <iostream>

using namespace std;

// Takes no parameters
void doPrint() {
	cout << "In doPrint() " << endl;

}

// Takes one integer, prints it
void printValue(int x) {
	cout << x << endl;
}

// Takes two integers, adds them and returns the result
int add(int x, int y) {
	return x + y;
}

int multiply(int x, int y) {
	return x * y;
}

int doubleNumber(int x) {
	return x * 2;
}