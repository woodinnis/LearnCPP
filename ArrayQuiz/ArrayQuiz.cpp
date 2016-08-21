// ArrayQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

namespace Animals {
	enum Animals {
		CHICKEN,
		DOG,
		CAT,
		ELEPHANT,
		DUCK,
		SNAKE,
		MAX_ANIMALS
	};
}

int main()
{
	// Question 1: set up an array to hold 365 days worth of temperatures
	const int c_DAYSINYEAR = 365;
	float dailyTemperature[c_DAYSINYEAR]{0.0};

	// Question 2: Set up and enum with animal names, 
	// declare an array using the enum, fill it will #of legs
	// print legs of elephant
	int animalLegs[Animals::MAX_ANIMALS]{ 2,4,4,4,2,0 };

	cout << "An Elephant has " << animalLegs[Animals::ELEPHANT] << " legs.\n";
    return 0;
}