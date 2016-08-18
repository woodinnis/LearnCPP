// SwitchQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

enum class Animal {
	ANIMAL_PIG,
	ANIMAL_CHICKEN,
	ANIMAL_GOAT,
	ANIMAL_CAT,
	ANIMAL_DOG,
	ANIMAL_OSTRICH
};

int calculate(int iOne, int iTwo, char cOper) {
	// Calculate the result of two integers using a unary operator

	switch (cOper)
	{
		case '+':
			return(iOne + iTwo);
		case '-':
			return(iOne - iTwo);
		case '*':
			return(iOne * iTwo);
		case '/':
			return(iOne / iTwo);
		case '%':
			return(iOne % iTwo);
		default:
			return(0);
	}
}

string getAnimalName(Animal animal) {
	// Returns the name of the animal using a switch statement
	switch (animal) {
		case Animal::ANIMAL_PIG:
			return("Pig");
		case Animal::ANIMAL_CHICKEN:
			return("Chicken");
		case Animal::ANIMAL_GOAT:
			return("Goat");
		case Animal::ANIMAL_CAT:
			return("Cat");
		case Animal::ANIMAL_DOG:
			return("Dog");
		case Animal::ANIMAL_OSTRICH:
			return("Ostrich");
		default:
			return("ERROR! This is not a valid animal!\n");
	}
}

void printNumberOfLegs(Animal animal) {
	// Prints the number of legs each animal walks on using a switch statement

	int legs;
	switch (animal){
		case Animal::ANIMAL_PIG:
		case Animal::ANIMAL_GOAT:
		case Animal::ANIMAL_CAT:
		case Animal::ANIMAL_DOG:
			legs = 4;
			break;
		case Animal::ANIMAL_OSTRICH:
		case Animal::ANIMAL_CHICKEN:
			legs = 2;
			break;
		default:
			cout << "ERROR! This is not a valid animal! \n";
			break;
	}

	cout << "A " << getAnimalName(animal) << " has " << legs << " legs.\n";
}
int main()
{
	// Question two 


	printNumberOfLegs(Animal::ANIMAL_CAT);
	printNumberOfLegs(Animal::ANIMAL_CHICKEN);
	
	/* Question One
	// Perform a basic calculation

	cout << "Enter an integer: ";
	int iOne;
	cin >> iOne;
	
	cout << "Enter an operation to perform (+,-,*,/,%): ";
	char cOper;
	cin >> cOper;

	cout << "Enter a second integer: ";
	int iTwo;
	cin >> iTwo;

	int iResult = calculate(iOne, iTwo, cOper);
	
	cout << "Result: " << iResult << '\n';
	*/
	return 0;
}

