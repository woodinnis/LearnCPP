// Quiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

namespace AnimalNames
{
	enum AnimalNames
	{
		CHICKEN,
		DOG,
		CAT,
		ELEPHANT,
		DUCK,
		SNAKE,
		MAX_INDEX
	};
}

int main()
{
	double highTemperature[365]{ 0.0 };
	int animalLegs[AnimalNames::MAX_INDEX]{ 2,4,4,4,2,0 };

	/*animalLegs[AnimalNames::CHICKEN] = 2 ;
	animalLegs[AnimalNames::DOG] = 4;
	animalLegs[AnimalNames::CAT] = 4;
	animalLegs[AnimalNames::ELEPHANT] = 4;
	animalLegs[AnimalNames::DUCK] = 2;
	animalLegs[AnimalNames::SNAKE] = 0;*/

	std::cout << "An elephant has " << animalLegs[AnimalNames::ELEPHANT] << " legs.\n";

    return 0;
}

