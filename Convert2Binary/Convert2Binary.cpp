// Convert2Binary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int printAndDecrementBit(int x, int pow) {
	 
	// Test whether x is greater than some power of 2
	if (x >= pow)
		cout << '1';
	else
		cout << '0';

	// If x is greater than the power of two, subtract it from x, and return the new value
	if (x >= pow)
		return x - pow;
	else
		return x;
}

void toBinary(int x) {
	// Test the whole number, if larger than 256, print an overflow
	if (x >= 256) {
		cout << "Overflow";
		return;
	}
	else{

		// The tutorial's suggestion
		x = printAndDecrementBit(x, 128);
		x = printAndDecrementBit(x, 64);
		x = printAndDecrementBit(x, 32);
		x = printAndDecrementBit(x, 16);

		cout << " ";

		x = printAndDecrementBit(x, 8);
		x = printAndDecrementBit(x, 4);
		x = printAndDecrementBit(x, 2);
		x = printAndDecrementBit(x, 1);

		/* My approach

		// These both do effectively the same thing, 
		// the tutorial's version simply optimizes the if/else and cout into its own function

		// Test the 128 bit place
		if (x >= 128) {
			x -= 128;
			cout << '1';
		}
		else
			cout << '0';
		// Test the 64 bit place
		if (x >= 64) {
			x -= 64;
			cout << '1';
		}
		else
			cout << '0';
		// Test the 32 bit place
		if (x >= 32) {
			x -= 32;
			cout << '1';
		}
		else
			cout << '0';
		// Test the 16 bit place
		if (x >= 16) {
			x -= 16;
			cout << '1';
		}
		else
			cout << '0';
		// Test the 8 bit place
		if (x >= 8) {
			x -= 8;
			cout << '1';
		}
		else
			cout << '0';
		// Test the 4 bit place
		if (x >= 4) {
			x -= 4;
			cout << '1';
		}
		else
			cout << '0';
		// Test the 2 bit place
		if (x >= 2) {
			x -= 2;
			cout << '1';
		}
		else
			cout << '0';
		// Test the 1 bit place
		if (x >= 1) {
			x -= 1;
			cout << '1';
		}
		else
			cout << '0';
		*/
	}

	return;
}

int main()
{

	cout << "Enter a number between 1 and 255: ";
	int toBin;
	cin >> toBin;
	
	toBinary(toBin);
    return 0;
}

