// Quiz01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "constants.h"

using namespace std;

double getInitialHeight() {
	cout << "Enter the height of your tower: ";
	double initialHeight;
	cin >> initialHeight;
	return initialHeight;
}

double calculateHeight(double initialHeight, int seconds) {
	
	// Using formula: [ s = u * t + (a * t^2) / 2 ], here u(initial velocity) = 0
	double distanceFallen = (myConstants::GRAVITY * seconds * seconds) / 2;
	double currentHeight = initialHeight - distanceFallen;

	return currentHeight;
}

void printHeight(double height, int seconds) {
	if (height > 0.0) {
		cout << "At " << seconds << " seconds, the ball is at height:\t" << height << " meters\n";
	}
	else
		cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

void calculateAndPrintHeight(double initialHeight, int seconds) {
	double height = calculateHeight(initialHeight, seconds);
	printHeight(height, seconds);
}

int main()
{
	double height;
	height = getInitialHeight();

	
    return 0;
}

