// Quiz02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "constants.h"

using namespace std;

// Get the initial tower height the ball is being dropped from
double getInitialHeight() {
	cout << "Enter the height of the tower: ";
	double towerHeight;
	cin >> towerHeight;
	return towerHeight;
}

// Returns height from ground after int "seconds" has elapsed
double calculateHeight(double initialHeight, int seconds) {
	
	// Using formula: [ s = u * t + (a * t^2) / 2 ], here u(initial velocity) = 0
	double distanceFallen = (myConstants::GRAVITY * seconds * seconds) / 2;
	double currentHeight = initialHeight - distanceFallen;
	
	return currentHeight;
}

// Prints the height at every second until the ball has reached the ground
void printHeight(double height, int seconds) {

	if (height > 0.0)
		cout << "At " << seconds << " seconds, the ball is " << height << " meters from the ground." << endl;
	else
		cout << "At " << seconds << " seconds, the ball is on the ground.";
}

void calculateAndPrint(double initialHeight, int seconds) {
	double height = calculateHeight(initialHeight, seconds);
	printHeight(height, seconds);
}

int main()
{
	
	const double initialHeight = getInitialHeight();

	calculateAndPrint(initialHeight, 0);
	calculateAndPrint(initialHeight, 1);
	calculateAndPrint(initialHeight, 2);
	calculateAndPrint(initialHeight, 3);
	calculateAndPrint(initialHeight, 4);
	calculateAndPrint(initialHeight, 5);
    return 0;
}

