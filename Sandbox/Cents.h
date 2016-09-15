#pragma once
#define CENTS_H

#include <string>
#include <iostream>

using namespace std;

// Cents class
class Cents {
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }

	// Overloaded operator fuction prototypes
	Cents operator+(int value);
	friend Cents operator-(const Cents &c1, const Cents &c2);

	Cents operator-() const;

	friend ostream& operator << (ostream &out, const Cents &cents);
	friend istream& operator >> (istream &in, Cents &cents);

	friend bool operator> (const Cents &c1, const Cents &c2);
	friend bool operator<= (const Cents &c1, const Cents &c2);

	friend bool operator< (const Cents &c1, const Cents &c2);
	friend bool operator>= (const Cents &c1, const Cents &c2);

	int getCents() const { return m_cents; }

	operator int() { return m_cents; }
};

