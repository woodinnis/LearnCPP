// Quiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	/// Section 01, 02
	//int array[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };

	//int searchvalue = 0;
	//do 
	//{
	//	std::cout << "Enter a number between 1 and 9 to find its array index.\n";
	//	std::cin >> searchvalue;
	//	if(std::cin.fail())
	//	{
	//		std::cin.clear();
	//		std::cin.ignore(32767, '\n');
	//	}
	//}while(searchvalue < 1 || searchvalue > 10);

	//int arraysize = sizeof(array) / sizeof(array[0]);
	//int arrayindex = 0;

	//for (int arrayindex = 0; arrayindex < arraysize; ++arrayindex)
	//	if (array[arrayindex] == searchvalue)
	//		std::cout << "The number " << searchvalue << " was found at index " << arrayindex << std::endl;
	//	//std::cout << "Value at array index " << arrayindex << ": " << array[arrayindex] << std::endl;
 //   return 0;

	/// Section 03
	int scores[] = { 84, 92, 76, 81, 56 };
	const int numStudents = sizeof(scores) / sizeof(scores[0]);

	int maxScore = 0; // keep track of our largest score
	int maxIndex = 0; // track the index of the largest score

					  // now look for a larger score
	for (int student = 0; student < numStudents; ++student)
		if (scores[student] > scores[maxIndex])
		{
			//maxScore = scores[student];
			maxIndex = student;
		}
	std::cout << "The best score was " << scores[maxIndex] << '\n';
	//std::cout << "The best student was indexed at " << maxIndex << '\n';

	return 0;
	
}

