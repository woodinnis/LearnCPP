// Booleans.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	bool b(true);

	cout << b << endl;
	cout << !b << endl;

	cout << std::boolalpha;
	bool b2(false);

	cout << b2 << endl;
	cout << !b2 << endl;

    return 0;
}

