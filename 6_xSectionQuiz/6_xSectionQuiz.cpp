// 6_xSectionQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>

using namespace std;

// Enum of the available inventory items
enum ITEMS{
	HEALTH_POTIONS,
	TORCHES,
	ARROWS,
	TOTAL_ITEMS
};

struct Student {
	string STUDENT_NAME;
	int STUDENT_GRADE;
};

int countTotalItems(int inventory[]) {
	// Count the total number of items in inventory
	int total{ 0 };
	for (int count = 0; count < TOTAL_ITEMS; ++count)
		total += inventory[count];

	return total;
}

void studentInfo(vector<Student> &students) {
	
	for (auto &element : students) {
		// Prompt the user for a student's name
		cout << "Student Name: ";
		string name;
		cin >> name;
		element.STUDENT_NAME = name;

		// Prompt the user for a student's grade
		cout << "Student Grade: ";
		int grade;
		cin >> grade;
		element.STUDENT_GRADE = grade;
	}
}

void showStudents(vector<Student> students) {
	// Print out student details
	for (const auto &element : students) {
		cout << element.STUDENT_NAME << " got a grade of " << element.STUDENT_GRADE << '\n';
	}
}

void sortStudents(vector<Student> &students) {
	// Sort students by grade
	int size = students.size();

	for (int startIndex = 0; startIndex < size; ++startIndex) {
		int smallIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex) {
			// Sort the grades highest first
			if (students[currentIndex].STUDENT_GRADE > students[smallIndex].STUDENT_GRADE)
				smallIndex = currentIndex;
		}
		swap(students[startIndex], students[smallIndex]);
	}
}

void swapInt(int &x, int &y) {
	// Swap two integers
	int z = x;
	x = y;
	y = z;
}

void printCString(char cChar[], int indexCount) {
	
	for (int index = 0; index < indexCount; ++index) {
		if (cChar[index] != '\0')
			cout << cChar[index];
		else
			break;
	}
}


int main()
{
	/*Q1 :{
		// Question 1: Create the base of an inventory system
		int inventory[TOTAL_ITEMS]{ 0 };

		// Fill the inventory using the enums
		inventory[HEALTH_POTIONS] = 2;
		inventory[TORCHES] = 5;
		inventory[ARROWS] = 10;

		cout << "Total items in inventory: " << countTotalItems(inventory) << "\n";
	};*/

	/*Q2:{
		// Question 2: Dynamically allocate an array and prompt a user to fill it with student names and grades
		
		// Create an empty vector
		vector<Student> students;

		// Prompt the user for a number of students
		cout << "Enter a number of students: ";
		int size;
		cin >> size;
		
		// Resize the vector to accomodate all the students
		students.resize(size);

		// Fill the vector
		studentInfo(students);

		// Sort the students
		sortStudents(students);

		// Show the student info
		showStudents(students);
	}*/

	/*Q3: {
			// Question 3: Write a function to swap two integer values
	
		cout << "Enter an integer: ";
		int int1{ 0 };
		cin >> int1;
		cout << "Enter an integer: ";
		int int2{ 0 };
		cin >> int2;

		swapInt(int1, int2);

		cout << "Values have been swapped: " << int1 << ", " << int2 << '\n';
	}*/

	/*Q4: { 
	
		// Question 4: Print a C-style string and print it char by char
	
		char cString[] = { "Hello, World!" };

		// FInd the total number of characters in the string
		int indexCount = sizeof(cString) / sizeof(cString[0]);

		// Print the string
		printCString(cString, indexCount);
		
	}*/


    return 0;
}

