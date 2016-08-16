// StdString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void nameAndAge() {
	
	cout << "Enter your full name: ";
	string name;
	getline(cin, name);		// Read a full line (name) from the user

	cout << "Enter your age: ";
	string age;
	getline(cin, age);		// Read a full line (age) from the user
	
	cout << "Your name is " << name << " and you are " << age << " years old." << endl;
}

void quiz() {
	cout << "Enter your full name: ";
	string name;
	getline(cin, name);		// Read a full line (name) from the user

	cout << "Enter your age: ";
	int age;
	cin >> age;		// Read a full line (age) from the user

	double livedFor = static_cast<double>(age) / name.length();

	cout << "You've lived for " << livedFor << " years for each letter in your name!" << endl;
}

int main()
{
	cout << "Pick 1 or 2: ";
	int choice;
	cin >> choice;

	cin.ignore(32767, '\n');

	if (choice == 1)
		nameAndAge();
	else
		quiz();

    return 0;
}

