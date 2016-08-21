// ArrayLoopQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int getIndex() {
	int index;
	do {
		cout << "Please enter a number between 1 and 9: ";
		cin >> index;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
		}

	} while (index < 1 || index > 9);

	return index;
}
int main()
{
	// Question 1: print the following array using a loop	
	int array[] = { 4,6,7,3,8,2,1,9,5 };
	const int arrayLength = sizeof(array)/ sizeof(array[0]);

	// Question 2: Ask the user for a number between 1 and 9,
	// Print the corresponding array index
	int index = getIndex()-1;

	//for (int i = 0; i < arrayLength; ++i) {
		cout << "Array item " << index << ": " << array[index] << '\n';
	//}

	// Question 3: Modify the following program so that instead 
	// of having maxScore hold the largest score directly, 
	// a variable named maxIndex holds the index of the largest
	// score.

		int scores[] = { 84,92,76,81,56 };
		const int numStudents = sizeof(scores) / sizeof(scores[0]);

		int maxScore = 0;
		int maxIndex = 0;
		for (int student = 0; student < numStudents; ++student) {
			if (scores[student] > scores[maxIndex]) {
				//maxScore = scores[student];
				maxIndex = student;
			}
		}

		//cout << "The best score was " << maxScore;
		cout << "The best score was " << scores[maxIndex];



    return 0;
}

