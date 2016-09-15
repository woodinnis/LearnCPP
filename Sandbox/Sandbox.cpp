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

void printInt(int value)
{
	cout << value;
}


class Dollars
{
private:
	int m_dollars;
public:
	Dollars(int dollars = 0)
	{
		m_dollars = dollars;
	}

	// Allow us to convert Dollars into Cents
	operator Cents() { return Cents(m_dollars * 100); }
};

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	// Default constructor
	Fraction(int numerator = 0, int denominator = 1) :
		m_numerator(numerator), m_denominator(denominator)
	{
		assert(denominator != 0);
	}

	// Copy constructor
	Fraction(const Fraction &copy) :
		m_numerator(copy.m_numerator), m_denominator(copy.m_denominator)
	{
		// no need to check for a denominator of 0 here since copy must already be a valid Fraction
		std::cout << "Copy constructor called\n"; // just to prove it works
	}

	friend std::ostream& operator<<(std::ostream& out, const Fraction &f1);
};

std::ostream& operator<<(std::ostream& out, const Fraction &f1)
{
	out << f1.m_numerator << "/" << f1.m_denominator;
	return out;
}

void printCents(Cents cents) {
	cout << cents;
}

int main()
{
	Potato potato;

	Dollars dollars(9);
	Cents cents;
	Cents nickle(5);
	Cents dime(10);

	printCents(dollars);

	Fraction fiveThirds(Fraction(5, 3));
	std::cout << fiveThirds;

	return 0;
}


