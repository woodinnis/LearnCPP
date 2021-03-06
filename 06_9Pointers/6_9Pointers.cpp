// 6_9Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
																				 // evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

// My solution
void sortArray(string *array, int numNames) {
	// Sort the array

	for (int startIndex = 0; startIndex < numNames; ++startIndex) {

		int maxNames = startIndex;

		for (int innerCount = startIndex + 1; innerCount < numNames; ++innerCount) {
			if (array[innerCount] < array[maxNames])
				maxNames = innerCount;
		}

		swap(array[startIndex], array[maxNames]);
	}
}

/* Tutorial solution
void sortArray(std::string *array, int length)
{
	// Step through each element of the array
	for (int startIndex = 0; startIndex < length; ++startIndex)
	{
		// smallestIndex is the index of the smallest element we've encountered so far.
		int smallestIndex = startIndex;

		// Look for smallest element remaining in the array (starting at startIndex+1)
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			// If the current element is smaller than our previously found smallest
			if (array[currentIndex] < array[smallestIndex])
				// This is the new smallest number for this iteration
				smallestIndex = currentIndex;
		}

		// Swap our start element with our smallest element
		std::swap(array[startIndex], array[smallestIndex]);
	}
}
*/

int main()
{
	/*
	int *value = new (nothrow) int;
	if (!value) {
		cout << "Cout not allocate memory";
		exit(1);
	}
	*/
	/* Dynamic array allocation
	{
		// Get an integer from the user
		cout << "Enter a positive integer: ";
		int size;
		cin >> size;

		// Create a dynamic array using the user's integer
		int *array = new int[size];

		cout << "I just allocated an array of size " << size << '\n';

		// Set the RNG seed
		srand(static_cast<unsigned int>(time(0)));

		// Fill the array with random numbers
		for (int i = 0; i < size; ++i) {
			array[i] = rand();
		}

		// Choose a random array index and display it on screen
		int index = getRandomNumber(0, size);
		cout << "Array index " << index << " = " << array[index] << '\n';

		// Delete the array
		delete[] array;
		array = nullptr;

		// Verify that the array has been deleted
		if (array)
			cout << "Array has not yet been deleted.\n";
		else
			cout << "Array has been deleted.\n";
	}*/

	// Quiz 1
	{
		// Request a number from the user
		cout << "How many names will you need to enter? ";
		int numNames;
		cin >> numNames;
		cin.ignore(32767, '\n');

		// Allocate an array
		string *array = new string[numNames];

		// Fill the array with names
		for (int count = 0; count < numNames; ++count) {
			cout << "Enter a student's name: ";

			cin >> array[count];
			cin.ignore(32767, '\n');
		}

		// Sort the array
		sortArray(array, numNames);

		// Print the array
		for (int count = 0; count < numNames; ++count) {
			cout << "Student " << count + 1 << ": " << array[count] << '\n';
		}
	}
	return 0;
}

