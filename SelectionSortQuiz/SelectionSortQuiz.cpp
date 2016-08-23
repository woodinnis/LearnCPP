// SelectionSortQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;


void question1() {
	// Question 1: Manually show how selection sort works 
	/* on the following array: { 30, 60, 20, 50, 40, 10 }.
	// Show the array after each swap that takes place.

	// Question 2: Decending-order sort
	int quiz1[] = { 30, 60, 20, 50, 40, 10 };

	int size = sizeof(quiz1) / sizeof(quiz1[0]);

	// Step through each element in the array
	for (int startIndex = 0; startIndex < size; ++startIndex) {

	for (int index = 0; index < size; ++index)
	cout << quiz1[index] << " ";

	cout << '\n';

	// Set the smallest index to the start index
	int smallestIndex = startIndex;

	// look for a smaller element than the current smallestIndex
	for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex) {

	// if the current element is smaller than smallestIndex
	if (quiz1[currentIndex] > quiz1[smallestIndex])
	// set a new smallestIndex
	smallestIndex = currentIndex;
	}

	swap(quiz1[startIndex], quiz1[smallestIndex]);
	}

	*/
}
int main()
{
	
	// question1();

	// Question 3: Bubble sort
	// Question 4: Optimizations

	const int size(9);
	int array[size] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

	for (int i = 0 ; i < size; ++i) {
		cout << array[i] << ", ";
	}
	
	cout << '\n';

	int count(1);
	for (int firstIndex = 0; firstIndex < size; ++firstIndex) {
		
		int topEnd(size-firstIndex);
		bool swapped = false;
		for (int secondIndex = 0; secondIndex < topEnd-1; ++secondIndex) {
			if (array[secondIndex] > array[secondIndex + 1]) {
				swap(array[secondIndex], array[secondIndex + 1]);
				swapped = true;
			}
		}

		if (!swapped) {
			cout << "Early termination on iteration " << count << '\n';
			break;
		}
		++count;
	}

	for (int i=0; i < size; ++i) {
		cout << array[i] << ", ";
	}

	cout << '\n';

    return 0;
}

