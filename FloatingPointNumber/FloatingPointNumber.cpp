// FloatingPointNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	double a(34.50);		// 3.45e1
	double b(0.004000);		// 4.0e-3
	double c(123.005);		// 123.005e-2
	double d(146000);		// 146.0e3
	double e(146000.001);	// 14600000.1e-2
	double f(0.0000000008);
	double g(34500.0);

	cout << "a) " << a << endl;
	cout << "b) " << b << endl;
	cout << "c) " << c << endl;
	cout << "d) " << d << endl;
	cout << "e) " << e << endl;
	cout << "f) " << f << endl;
	cout << "g) " << g << endl;
    return 0;
}

