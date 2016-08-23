// Array_SelectionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int x = 2;
	int y = 4;

	int array[4] = { 1,3,5,7 };

	cout << "Before swap: x = " << x << ". y = " << y << "\n";
	swap(x, y);
	cout << "After swap: x = " << x << ". y = " << y << "\n";

	cout << "Before swap: 0 = " << array[0] << ", 3 = " << array[3] << "\n";
	swap(array[0], array[3]);
	cout << "After swap: 0 = " << array[0] << ", 3 = " << array[3] << "\n";

    return 0;
}

