// Sandbox.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct potato {
	double circ;
	double weight;
	string colour;
};

void referenceMe(int &ref) {
	ref++;
}

void structRef(potato &ref) {
	ref.colour = "green";
}

int main()
{
	int var = 0;

	int fibonacci[] = { 0,1,1,2,3,5,8,13,21 };

	for (int number : fibonacci) {
		cout << "Look at me ";
		if (number % 2 == 0)
			cout << "I'm even!";
		cout << '\n';
	}

}

