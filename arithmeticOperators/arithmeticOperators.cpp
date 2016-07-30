// arithmeticOperators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

/* How I did it, predictably overcomplicating things
bool isEven(int checkNumber) {
	if (checkNumber % 2 == 0)
		return true;
	else
		return false;
}

void getInteger() {
	
	cout << "Enter an integer to see if it is even:";
	int checkEven;
	cin >> checkEven;
	if (isEven(checkEven))
		cout << "This is an even number!" << endl;
	else
		cout << "This is not an even number." << endl;

	return;
}
*/

bool isEven(int x) {
	return(x % 2) == 0;
}

int main()
{
	// the Tutorial's much simpler suggestion
	cout << "Enter an Integer: ";
	int x;
	cin >> x;

	if (isEven(x))
		cout << x << " is Even\n";
	else
		cout << x << " is odd\n";

    return 0;
}

