// Sandbox.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "utilities.h"
#include "Date.h"
#include "Potato.h"
#include "TestHeader.h"

/*
#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>
*/
using namespace std;

class Wanker {
private:
	int m_int;
	double m_double;
	string m_string;

public:
	Wanker() {}
	Wanker(int x = 0 , double y = 0.0, string z = ""):
		m_int( x ), m_double( y ), m_string( z ) {}

	void showVars() const {
		cout << "m_int is set to: " << m_int << '\n';
		cout << "m_double is set to: " << m_double << '\n';
		cout << "m_string is set to: " << m_string << '\n';
	}
};

int main()
{
/*
	bool createPotato = true;

	while (createPotato) {
		
		char temp;
		do {
			cout << "Would you like to create a potato? [y/n]";
			cin >> temp;
		} while (temp != 'y' && temp != 'Y' && temp != 'n' && temp != 'N');
		
		if (temp == 'y' || temp == 'Y')
			newPotato(myArray);
		else
			createPotato = false;
	}

	for (const auto &element : myArray) {
		showVector(myArray);
	}
*/

	Potato potato;

	//potato.newPotato();

	Date Birthday(1982,02,15);

	Wanker fap(0,0.0,"");

	fap.showVars();

	//cout << "My Birthday is: " << Birthday.getDay() << " " << Birthday.getMonth() << " " << Birthday.getYear() << '\n';

	//potato.showPotato();

	// cout << add(52, 100);

	cout << message("potato","fish","oil");
}

/*	Old sandbox stuff.

void referenceMe(int &ref) {
	ref++;
}

void showArray(array<int, 10> thisArray) {
	for (const auto &element : thisArray)
		cout << element << " ";

	cout << '\n';
}

void showVector(vector<int> myVector) {
	for (int count = 0; count < myVector.size(); ++count)
		cout << myVector[count] << '\n';
}

potatoVector[pVectorIndex].name = name;
potatoVector[pVectorIndex].circ = circ;
potatoVector[pVectorIndex].weight = weight;
potatoVector[pVectorIndex].fleshColour = flesh;
potatoVector[pVectorIndex].peelColour = peel;
potatoVector[pVectorIndex].texture = texture;

void structRef(potato &ref) {
ref.fleshColour = "green";
}

void showVector(vector<potato> myVector) {
	for (const auto &element : myVector) {
		cout << "The potato is named " << element.name << '\n';
		cout << element.name << " is " << element.circ << " around\n";
		cout << element.name << " weighs " << element.weight << '\n';
		cout << element.name << "'s insides are " << element.fleshColour << '\n';
		cout << element.name << "'s peel is " << element.peelColour << '\n';
		cout << element.name << " feels like " << element.texture << " on the inside \n";
		cout << '\n';
	}
}
// Resize potatoVector
potatoVector.resize(potatoVector.size() + 1);

// Get new size and create an index for use
int pVectorIndex = potatoVector.size() - 1;

// Create a reference to the new index
potato &ref = potatoVector[pVectorIndex];

// Create the new entry
ref.name = name;
ref.circ = circ;
ref.weight = weight;
ref.fleshColour = flesh;
ref.peelColour = peel;
ref.texture = texture;

*/
