// Sandbox.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "utilities.h"
#include "Date.h"
#include "Potato.h"
#include "TestHeader.h"

using namespace std;

class Cents{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }

	// Overloaded operator fuction prototypes
	Cents operator+(int value);
	friend Cents operator-(const Cents &c1, const Cents &c2);

	Cents operator-() const;

	friend ostream& operator<< (ostream &out, const Cents &cents);
	friend istream& operator>> (istream &in, Cents &cents);

	int getCents() const { return m_cents; }
};

//	+ Operator overload function
Cents Cents::operator+(int value)
{
	return Cents(m_cents + value);
}
//	- Operator overload function
Cents operator-(const Cents &c1, const Cents &c2)
{
	return Cents(c1.getCents() - c2.getCents());
}

Cents Cents::operator-() const
{
	return Cents(-m_cents);
}

ostream & operator<<(ostream &out, const Cents &cents)
{
	out << "I have " << cents.getCents() << " cents.\n";

	return out;
}

istream& operator>> (istream &in, Cents &cents)
{
	in >> cents.m_cents;

	return in;
}

int main()
{
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

	Potato potato;

	Cents c1(10);
	Cents dime(10);
	int c2;
	
	cout << "Enter a value: ";
	cin >> c2;

	Cents centSum = c1 + c2;

	cout << centSum;

	cout << "Negative dimes are worth " << (-dime) << '\n';
}


