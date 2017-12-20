// Typedefs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// Two ways to define a typedef
typedef double porcupine_t;
using pi_t = double;

using error_t = int;

error_t printData() {
	return 0;
}

int main()
{
	int8_t i(97);	// int_8 is a predefined typedef for char
	porcupine_t porky(30.1);
	pi_t pi(3.14159);

	cout << i << endl;
	cout << porky << endl;
	cout << pi << endl;

    return 0;
}

