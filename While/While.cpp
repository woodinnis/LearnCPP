// While.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void printAlphabet() {
	// Print letters a through z along with their ASCII values
	char alpha = 'a';
	while (alpha <= 'z') {
		cout << alpha << " = " << static_cast<int>(alpha);
		++alpha;
		cout << '\n';
	}
}

void inverted() {

	// Print the number triangle inverted
	int outer = 5;
	while (outer >= 1) {
		int inner = outer;
		while (inner >= 1) {
			cout << inner-- << " ";
		}
		cout << '\n';
		--outer;
	}
}

void flip() {
	// Print the number triangle right to left
	int outer = 1;
	while (outer <= 5) {
		int spaces = 5 - outer;
		while (spaces >= 1) {
			cout << "  ";
			--spaces;
		}
		int inner = outer;
		while (inner >= 1) {
			cout << inner-- << " ";
		}
		cout << '\n';
		++outer;
	}
}

int main()
{
	//printAlphabet();
	
	//inverted();

	flip();

	/*
	int outer = 1;
	while (outer <= 10) {

		// loop between 1 and outer
		int inner = 1;
		while (inner <= outer) {
			cout << inner++ << " ";
		}
		
		cout << "\n";
		++outer;
	}
	cout << "Done!";
	*/
    return 0;
}

