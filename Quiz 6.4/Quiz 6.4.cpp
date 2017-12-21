// Quiz 6.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <utility>


void sortSmallest(int array[], const int length)
{
	std::cout << "Sorted Smallest to Largest \n\n";

	for (int startIndex = 0; startIndex < length; ++startIndex)
	{
		int smallestIndex = startIndex;
		for (int currentIndex = startIndex; currentIndex < length; ++currentIndex)
		{
			if (array[smallestIndex] > array[currentIndex])
				smallestIndex = currentIndex;
		}
		std::swap(array[startIndex], array[smallestIndex]);
		std::cout << array[0] << ", " << array[1] << ", " << array[2] << ", " << array[3] << ", " << array[4] << ", " << array[5] << std::endl;
	}
}

void bubbleSort(int array[], const int length)
{
	std::cout << "Bubble sort\n\n";

	for (int startIndex = 0; startIndex < length-1; ++startIndex)
	{
		for (int currentIndex = 0; currentIndex < length-1; ++currentIndex)
		{
			if (array[currentIndex] < array[currentIndex+1])
				std::swap(array[currentIndex], array[currentIndex+1]);
		}
	}
	
	for (int i = 0; i < length;++i)
		std::cout << array[i] << ", ";

	std::cout << '\n';
}

void sortLargest(int array[], const int length)
{

	std::cout << "Sorted Largest to Smallest \n\n";

	for (int startIndex = 0; startIndex < length; ++startIndex)
	{
		int largestIndex = startIndex;
		for (int currentIndex = startIndex; currentIndex < length; ++currentIndex)
		{
			if (array[largestIndex] < array[currentIndex])
				largestIndex = currentIndex;
		}
		std::swap(array[startIndex], array[largestIndex]);
		std::cout << array[0] << ", " << array[1] << ", " << array[2] << ", " << array[3] << ", " << array[4] << ", " << array[5] << std::endl;
	}
}

int main()
{
	//const int length{ 6 };
	//int array[length]{ 30, 60, 20, 50, 40, 10 };

	
	int array[] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
	const int length = sizeof(array) / sizeof(array[0]);

	//sortSmallest(array, length);
	//sortLargest(array, length);
	bubbleSort(array, length);
    return 0;
}

