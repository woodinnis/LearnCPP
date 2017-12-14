// 7_11Recursion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>
#include <cassert>

using namespace std;

int fibonacci(int number) {
	if (number == 0)
		return 0;
	if (number == 1)
		return 1;
	return fibonacci(number - 1) + fibonacci(number - 2);
}

int factorial(int N) {
	if (N > 1)
		return N * factorial(N - 1);
	else
		return 1;
}

int numSum(int num) {
	if (num < 10)
		return num;
	else
		return numSum(num / 10) + num % 10;

}

int main()
{
	//	Quiz 1) A factorial of an integer N (written N!) is defined as the product (multiplication) of all the numbers between 1 and N (0! = 1). 
	/*			Write a recursive function called factorial that returns the factorial of the input. Test it with the first 7 factorials.

	int N = 1;
	int total = 7;

	for (int count = 0; count < total; ++count) {
		cout << "The factorial of " << N << " is " << factorial(N) << '\n';
		N++;
	}
	*/

	//	Quiz 2) Write a recursive function that takes an integer as input and returns the sum of all the numbers in the integer (e.g. 357 = 15).
	//	Print the answer for input 93427 (which is 25).

	cout << numSum(93427);

	/*
	for (int count = 0;count < 13;++count)
	cout << fibonacci(count) << " ";
	*/

    return 0;
}

