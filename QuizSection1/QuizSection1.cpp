// QuizSection1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "myIO.h"

// Function prototypes
//int readNumber();
//void writeAnswer(int userValue);

int main()
{
	int userValueOne;
	int userValueTwo;

	userValueOne = readNumber();	// Get a single number from the user
	userValueTwo = readNumber();
	writeAnswer(userValueOne + userValueTwo);	// Output an answer
    return 0;
}