// Sandbox.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "utilities.h"
#include "Date.h"
#include "Potato.h"
#include "TestHeader.h"
#include "Cents.h"

using namespace std;

int main()
{
	Potato potato;

	Cents nickle(5);
	Cents dime(10);
	int c2;
	
	cout << "Enter a value: ";
	cin >> c2;

	Cents centSum = nickle + c2;


	if (nickle > dime)
		cout << "a nickle is greater than a dime.\n";
	if (nickle >= dime)
		cout << "a nickle is greater than or equal to a dime.\n";
	if (nickle < dime)
		cout << "a dime is greater than a nickle.\n";
	if (nickle <= dime)
		cout << "a dime is greater than or equal to a nickle.\n";

	/*
	bool createPotato = true;

	while (createPotato) {

	char temp;
	do {
	cout << "Would you like to create a potato? [y/n]";
	cin >> temp;
	} while (temp != 'y' && temp != 'Y' && temp != 'n' && temp != 'N');

	if (temp == 'y' || temp == 'Y')
	newPotato(myArray);
	else
	createPotato = false;
	}

	for (const auto &element : myArray) {
	showVector(myArray);
	}
	*/

}


