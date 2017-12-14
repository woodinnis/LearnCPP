// 6_12ForEchQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string names[8] = { "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };
    
	cout << "Enter a name: ";
	string checkName;
	cin >> checkName;

	bool found = false;
	for (const auto &name : names) {
		if (name == checkName) {
			found = true;
			break;
		}
	}

	if(found)
		cout << checkName << " was found!\n";
	else 
		cout << checkName << " was not found!\n";
	return 0;
}

