// RNG.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

unsigned int PRNG() {

	static unsigned int seed = 2435;

	seed = (9094857 * seed + 9465930);

	return seed % 37563;
}

int getRandomRange(int min, int max) {

	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1);

	cout << static_cast<int>(rand() * fraction * (max - min + 1) + min);
	//return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	return 0;
}

int main()
{

	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0;i < 25;++i) {
		//cout << getRandomRange(1, 6) <<"\t";
		getRandomRange(1, 6);
		//cout << rand() << "\t";

		//cout << PRNG() <<"\n";
		if ((i+1) % 5 == 0)
			cout << "\n";
	}


	//getRandomRange(1, 6);
    return 0;
}

