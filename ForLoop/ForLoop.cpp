// ForLoop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void forQuizOne() {
	for (int i = 0; i <= 20; i+=2) {
			cout << i << "\n";
	}
}

int forQuizTwo(int sum) {
	
	int total = 0;
	
	for (int i = 0; i <= sum; ++i) {
		total += i;
	}

	return(total);
}

int main()
{
	//forQuizOne();

	//cout << forQuizTwo(5);

	for (int count = 9; count >= 0; --count)
		cout << count << " ";
    return 0;
}

