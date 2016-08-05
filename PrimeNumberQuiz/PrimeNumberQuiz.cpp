// PrimeNumberQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

/* How I tried to do this
bool isPrime(int x) {
	
	x = x%1;

	if (x > 0)
		return false;
	else
		return true;
}
*/

int main()
{
	
	cout << "Enter a single digit integer: ";
	int x;
	cin >> x;

	bool prime(false);

	// How the tutorial suggested doing it
	if (x == 0 || x == 1 || x == 2 || x == 3 || x == 5 || x == 7)
		prime = true;

	if (prime)
		cout << "This number is prime!";
	else
		cout << "This number is not prime.";

	/*
	if (isPrime(x))
		cout << "Your number is prime!";
	else
		cout << "This is not a prime number.";
	*/

    return 0;
}

