// 7_xSectionQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>

using namespace std;

struct Potato {
	string peel;
	int eyes;
};

//	1) Write function prototypes for the following cases.Use const if / when necessary.
//	a) A function named max() that takes two doubles and returns the larger of the two.
double max( double x,  double y) {
	return 0.0;
}
//	b) A function named swap() that swaps two integers.
void swap(int &x, int &y) {

}

//	3) Binary search
//	3a) Write an iterative version of the binarySearch function.
/*
int binarySearch(int *array, int target, int min, int max)
{	
	// Scan for target value
	while (min <= max) {
		int index = (max + min) / 2;

		if (array[index] > target) {
			max = index - 1;
		}
		else if (array[index] < target) {
			min = index + 1;
		}
		else
			return index;
	}

	return -1;
}
*/

//	3b) Write a recursive version of the binarySearch function.
int binarySearch(int *array, int target, int min, int max)
{
	// Scan for target value

	if(min > max)
		return -1;

	int index = (max + min) / 2;
	
	if (array[index] > target)
		return binarySearch(array, target, min, index - 1);
	else if (array[index] < target)
		return binarySearch(array, target, index + 1, max);
	else
		return index;
}

int main()
{
	int array[] = { 3, 6, 8, 12, 14, 17, 20, 21, 26, 32, 36, 37, 42, 44, 48 };

	// We're going to test a bunch of values to see if they produce the expected results
	const int numTestValues = 9;
	// Here are the test values
	int testValues[numTestValues] = { 0, 3, 12, 13, 22, 26, 43, 44, 49 };
	// And here are the expected results for each value
	int expectedValues[numTestValues] = { -1, 0, 3, -1, -1, 8, -1, 13, -1 };

	// Loop through all of the test values
	for (int count = 0; count < numTestValues; ++count)
	{
		// See if our test value is in the array
		int index = binarySearch(array, testValues[count], 0, 14);
		// If it matches our expected value, then great!
		if (index == expectedValues[count])
			std::cout << "test value " << testValues[count] << " passed!\n";
		else // otherwise, our binarySearch() function must be broken
			std::cout << "test value " << testValues[count] << " failed.  There's something wrong with your code!\n";
	}

	return 0;
}