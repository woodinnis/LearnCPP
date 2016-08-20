// Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

namespace StudentNames {
	enum StudentNames {
		GEORGE,	// 0
		PAUL,	// 1
		JOHN,	// 2
		RINGO,	// 3
		YOKO,	// 4
		MAX_STUDENTS	// n
	};
}

void passArray(int prime[StudentNames::MAX_STUDENTS], int arraySize) {
	
	prime[0] = 1;
	prime[1] = 2;
	prime[2] = 3;

	/* This causes a stack error for some undetermined reason
	for (int i = 0; i < arraySize;i++)
		//prime[i] = 11;
	*/
}

int passArray(int prime) {
	return prime = 100;
}

int main()
{
	int testScores[StudentNames::MAX_STUDENTS]{};
	const int arraySize = sizeof(testScores);

	testScores[StudentNames::RINGO] = 47;

	passArray(testScores, arraySize);

	for(int i = 0; i < StudentNames::MAX_STUDENTS; ++i)
		cout << testScores[i] << '\n';

    return 0;
}

