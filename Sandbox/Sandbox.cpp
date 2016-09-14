// Sandbox.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "utilities.h"
#include "Date.h"
#include "Potato.h"
#include "TestHeader.h"
#include "Cents.h"
#include <cassert> // for assert()


class Matrix
{
private:
	double data[4][4];
public:
	Matrix()
	{
		// Set all elements of the matrix to 0.0
		for (int row = 0; row < 4; ++row)
			for (int col = 0; col < 4; ++col)
				data[row][col] = 0.0;
	}

	double& operator()(int row, int col);
	const double& operator()(int row, int col) const; // for const objects
	void operator()();

};

double& Matrix::operator()(int row, int col)
{
	assert(col >= 0 && col < 4);
	assert(row >= 0 && row < 4);

	return data[row][col];
}

const double& Matrix::operator()(int row, int col) const
{
	assert(col >= 0 && col < 4);
	assert(row >= 0 && row < 4);

	return data[row][col];
}

void Matrix::operator()()
{
	// Reset all elements of the matrix to 0.0
	for (int row = 0; row < 4; ++row)
		for (int col = 0; col < 4; ++col)
			data[row][col] = 0.0;
}

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

	Matrix matrix;
	matrix(1, 2) = 4.5;
	cout << matrix(1, 2) << '\n';
	matrix();
	cout << matrix(1, 2);
	return 0;


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


