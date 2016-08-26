// Sandbox.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>

using namespace std;

struct potato {
	string name;
	double circ;
	double weight;
	string fleshColour;
	string peelColour;
	string texture;
};

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

void newPotato(vector<potato> &potatoVector) {
	// Add a new potato to the vector list of potatos

	// Prompt the user for details about their potato

	// Name
	cout << "Please name your potato: ";
	string name;
	cin >> name;

	// Size
	cout << "How large is your potato? ";
	double circ;
	cin >> circ;

	// Weight
	cout << "How heavy is your potato? ";
	double weight;
	cin >> weight;

	// Flesh colour
	cout << "What colour is the flesh of your potato? ";
	string flesh;
	cin >> flesh;

	// Peel colour
	cout << "What colour is the peel of your potato? ";
	string peel;
	cin >> peel;

	// Texture
	cout << "What is the texture of your potato? ";
	string texture;
	cin >> texture;


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

	/*
	potatoVector[pVectorIndex].name = name;
	potatoVector[pVectorIndex].circ = circ;
	potatoVector[pVectorIndex].weight = weight;
	potatoVector[pVectorIndex].fleshColour = flesh;
	potatoVector[pVectorIndex].peelColour = peel;
	potatoVector[pVectorIndex].texture = texture;
	*/
	//}
}

int main()
{
	vector<potato> myArray;

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

}
