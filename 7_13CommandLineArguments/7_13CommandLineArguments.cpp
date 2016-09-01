// 7_13CommandLineArguments.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "There are  " << argc << " arguments:\n";

	if(argc <=1){
		if (argv[0])
			cout << "Usage: " << argv[0] << " <number>" << '\n';
		else
			cout << "Usage: <program name> <number>" << '\n';

		exit(1);
	}

	stringstream convert(argv[1]);

	int myint;
	if (!(convert >> myint))
		myint = 0;
	
	cout << "Got integer: " << myint << '\n';

	/*
	for (int count = 0; count < argc; ++count)
		cout << count << " " << argv[count] << '\n';

	*/
    return 0;
}

