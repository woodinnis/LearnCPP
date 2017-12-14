// 9_02-OverloadingArithmeticOperators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

//	1a) Write a class named Fraction that has a integer numerator and denominator member.
//	Write a print() function that prints out the fraction.

//	1b) Add overloaded multiplication operators to handle multiplication between a Fraction and integer, and between two Fractions.
//	Use the friend function method.

//	1c) Extra credit: the fraction 2/4 is the same as 1/2, but 2/4 is not reduced to the lowest terms. 
//	We can reduce any given fraction to lowest terms by finding the greatest common divisor (GCD) between the numerator and denominator, 
//	and then dividing both the numerator and denominator by the GCD.

class Fraction {
private:
	int m_numerator;
	int m_denominator;
public:
	Fraction(int num, int den) {
		m_numerator = num;
		m_denominator = den;
	}
	void print() {
		cout << m_numerator << "\\" << m_denominator << '\n';
	}

	static int gcd(int a, int b) {
		return b == 0 ? a : gcd(b, a % b);
	}

	void reduce() {
		int gcd = Fraction::gcd(m_numerator, m_denominator);
		m_numerator /= gcd;
		m_denominator /= gcd;
	}

	friend Fraction operator* (Fraction &f1, Fraction &f2);
	friend Fraction operator* (Fraction &f1, int value);
	friend Fraction operator* (int value, Fraction &f2);

};

Fraction operator*(Fraction & f1, Fraction & f2){
	return Fraction(f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator);
}

Fraction operator* (Fraction &f1, int value){
	return Fraction(f1.m_numerator * value, f1.m_denominator);
}

Fraction operator*(int value, Fraction & f2){
	return Fraction(f2.m_numerator * value, f2.m_denominator);
}
int main()
{
	Fraction f1(2, 5);
	f1.print();

	Fraction f2(3, 8);
	f2.print();

	Fraction f3 = f1 * f2;
	f3.print();

	Fraction f4 = f1 * 2;
	f4.print();

	Fraction f5 = 2 * f2;
	f5.print();

	Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
	f6.print();

    return 0;
}

