// Sandbox.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "utilities.h"
#include "Date.h"
#include "Potato.h"
#include "TestHeader.h"
#include "Cents.h"
#include <cassert> // for assert()

class IntList
{
private:
	int m_list[10];

public:
	int& operator[] (const int index);
};

int& IntList::operator[] (const int index)
{
	assert(index >= 0 && index < 10);

	return m_list[index];
}

using namespace std;

class Digit
{
private:
	int m_digit;
public:
	Digit(int digit = 0)
		: m_digit(digit)
	{
	}

	Digit& operator++(); // prefix
	Digit& operator--(); // prefix

	Digit operator++(int); // postfix
	Digit operator--(int); // postfix

	friend std::ostream& operator<< (std::ostream &out, const Digit &d);
};

Digit& Digit::operator++()
{
	// If our number is already at 9, wrap around to 0
	if (m_digit == 9)
		m_digit = 0;
	// otherwise just increment to next number
	else
		++m_digit;

	return *this;
}

Digit& Digit::operator--()
{
	// If our number is already at 0, wrap around to 9
	if (m_digit == 0)
		m_digit = 9;
	// otherwise just decrement to next number
	else
		--m_digit;

	return *this;
}

Digit Digit::operator++(int)
{
	// Create a temporary variable with our current digit
	Digit temp(m_digit);

	// Use prefix operator to increment this digit
	++(*this); // apply operator

			   // return temporary result
	return temp; // return saved state
}

Digit Digit::operator--(int)
{
	// Create a temporary variable with our current digit
	Digit temp(m_digit);

	// Use prefix operator to decrement this digit
	--(*this); // apply operator

			   // return temporary result
	return temp; // return saved state
}

std::ostream& operator<< (std::ostream &out, const Digit &d)
{
	out << d.m_digit;
	return out;
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

	Digit digit(c2);

	std::cout << digit;
	std::cout << ++digit; // calls Digit::operator++();
	std::cout << digit++; // calls Digit::operator++(int);
	std::cout << digit;
	std::cout << --digit; // calls Digit::operator--();
	std::cout << digit--; // calls Digit::operator--(int);
	std::cout << digit;

	IntList list;

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


