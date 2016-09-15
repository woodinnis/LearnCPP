// 9_x-SectionQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//	2) A floating point number is a number with a decimal where the number of digits after the decimal can be variable.
//	A fixed point number is a number with a fractional component where the number of digits in the fractional portion is fixed.

//	In this quiz, we’re going to write a class to implement a fixed point number with two fractional digits(e.g. 12.34, 3.00, or 1278.99).
//	Assume that the range of the class should be - 32768.99 to 32767.99, that the fractional component should hold any two digits, 
//	that we care about precision, and that we want to conserve space.

//	2b) Write a class named FixedPoint2 that implements the recommended solution from the previous question.
//	Provide the overloaded operators and constructors required for the following program to run :

class FixedPoint2 {
private:
	//signed long int m_nonFractional;
	std::int16_t m_nonFractional;
	//signed int m_Fractional;
	std::int8_t m_Fractional;
public:
	//FixedPoint2(signed long int nF = 0, signed int f = 0) { m_nonFractional = nF; m_Fractional = f; }
	FixedPoint2(std::int16_t nF = 0, std::int8_t f = 0) 
		: m_nonFractional(nF), m_Fractional(f) {}
	FixedPoint2(double f = 0.0) {
		m_nonFractional = static_cast<std::int16_t>(f);
		m_Fractional = static_cast<std::int8_t>(round((f - m_nonFractional) * 100));
	}

	friend std::ostream& operator<< (std::ostream &out, const FixedPoint2 &x);
};

std::ostream& operator<<(std::ostream &out, const FixedPoint2 &x)
{	
	out << x.m_nonFractional << '.';
	
	if(x.m_Fractional > 10)
		out << static_cast<int>(x.m_Fractional);
	else
		out << '0' << static_cast<int>(x.m_Fractional);
	return out;
}

int main()
{
	FixedPoint2 a(34, 56);
	std::cout << a << '\n';

	FixedPoint2 b(9.617); // any decimal digits beyond 2 should be rounded to 2 decimals
	std::cout << b << '\n';

	FixedPoint2 c(5.01); // stored as 5.0099999... so we'll need to round this
	std::cout << c << '\n';

	return 0;
}

