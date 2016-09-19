// 9_x-SectionQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//	4) Extra credit: This one is a little more tricky. A floating point number is a number with a decimal where the number of digits after the decimal can be variable.
//	A fixed point number is a number with a fractional component where the number of digits in the fractional portion is fixed.

//	In this quiz, we’re going to write a class to implement a fixed point number with two fractional digits(e.g. 12.34, 3.00, or 1278.99).
//	Assume that the range of the class should be - 32768.99 to 32767.99, that the fractional component should hold any two digits, 
//	that we care about precision, and that we want to conserve space.

//	4b) Write a class named FixedPoint2 that implements the recommended solution from the previous question.
//	Provide the overloaded operators and constructors required for the following program to run :

//	4c) Overload operators >>, - (unary), + (binary) and the cast to double.

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

	//	Overload >>
	friend std::istream& operator>> (std::istream &in, FixedPoint2 &x);
	//	Overload unary -
	FixedPoint2 operator-() const;
	//	Overload binary +
	friend FixedPoint2& operator+ (const FixedPoint2 fp1, const FixedPoint2 fp2);
	//	Overload double typecast
	operator double() { return m_nonFractional; }
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

std::istream & operator >> (std::istream &in, FixedPoint2 & x)
{
	double temp = 0.0;
	in >> temp;
	x.m_nonFractional = static_cast<std::int16_t>(temp);
	x.m_Fractional = static_cast<std::int8_t>(round((temp - x.m_nonFractional) * 100));
	return in;
}

FixedPoint2 FixedPoint2::operator-() const
{
	return FixedPoint2(-m_nonFractional,m_Fractional);
}

FixedPoint2 & operator+(const FixedPoint2 fp1, const FixedPoint2 fp2)
{
	return FixedPoint2((fp1.m_nonFractional + fp2.m_nonFractional), (fp1.m_Fractional + fp2.m_Fractional));
}

void testAddition()
{
	// h/t to reader Sharjeel Safdar for this function
	std::cout << std::boolalpha;
	std::cout << (FixedPoint2(5.67) + FixedPoint2(3.23) == FixedPoint2(8.90)) << '\n'; // both positive, no overflow
	std::cout << (FixedPoint2(5.55) + FixedPoint2(5.55) == FixedPoint2(11.10)) << '\n'; // both positive, overflow
	std::cout << (FixedPoint2(-54.25) + FixedPoint2(-25.26) == FixedPoint2(-79.51)) << '\n'; // both negative, no overflow
	std::cout << (FixedPoint2(-54.54) + FixedPoint2(-24.67) == FixedPoint2(-79.21)) << '\n'; // both negative, overflow
	std::cout << (FixedPoint2(85.74) + FixedPoint2(-25.45) == FixedPoint2(60.29)) << '\n'; // second negative, no overflow
	std::cout << (FixedPoint2(85.74) + FixedPoint2(-25.85) == FixedPoint2(59.89)) << '\n'; // second negative, overflow
	std::cout << (FixedPoint2(-85.74) + FixedPoint2(25.45) == FixedPoint2(-60.29)) << '\n'; // first negative, no overflow
	std::cout << (FixedPoint2(-85.74) + FixedPoint2(25.85) == FixedPoint2(-59.89)) << '\n'; // first negative, overflow
}

int main()
{

	testAddition();

	FixedPoint2 a(34, 56);
	std::cout << a << '\n';

	std::cout << -a << '\n';

	std::cout << "Enter a number: "; // enter 5.678
	std::cin >> a;

	std::cout << "You entered: " << a << '\n';

	return 0;
}

