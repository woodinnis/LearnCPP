#include "stdafx.h"
#include "Cents.h"
#include <iostream>

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

ostream& operator<<(ostream &out, const Cents &cents)
{
	out << "I have " << cents.getCents() << " cents.\n";

	return out;
}

istream& operator>> (istream &in, Cents &cents)
{
	in >> cents.m_cents;

	return in;
}

// Overloaded compairison operators
bool operator>(const Cents & c1, const Cents & c2)
{
	return c1.m_cents > c2.m_cents;
}
bool operator>=(const Cents & c1, const Cents & c2)
{
	return c1.m_cents >= c2.m_cents;
}
bool operator<(const Cents & c1, const Cents & c2)
{
	return c1.m_cents < c2.m_cents;
}
bool operator<=(const Cents & c1, const Cents & c2)
{
	return c1.m_cents <= c2.m_cents;
}