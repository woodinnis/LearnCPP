// Potato.cpp : Defines the entry point for the console application.
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

void showPotato(vector<potato> myVector) {

	// If there are no potatoes on file, return the use to main()
	if (myVector.size() <= 0) {
		cout << "There are currently no potatoes on file, please create a potato.\n\n";
		return;
	}
	// If there are potatoes on file, tell user the number
	else
		cout << "There are " << myVector.size() << " potatos on file.\n\n";

	int index;

	// Prompt user for which potato they would like to view
	do {
		cout << "Which potato would you like to view? ";
		cin >> index;
	} while (index < 0 || index > myVector.size());

	// Create a reference
	potato &element = myVector[index-1];
	
	// Retrieve and display information on the user's desired potato.
	cout << "The potato is named " << element.name << '\n';
	cout << element.name << " is " << element.circ << " around\n";
	cout << element.name << " weighs " << element.weight << '\n';
	cout << element.name << "'s insides are " << element.fleshColour << '\n';
	cout << element.name << "'s peel is " << element.peelColour << '\n';
	cout << element.name << " feels like " << element.texture << " on the inside \n";
	cout << '\n';
	
}

void newPotato(vector<potato> &potatoVector) {
	// Add a new potato to the vector list of potatos

	// Prompt the user for details about their potato

	// Name
	cout << "Please name your potato: ";
	string name;
	cin >> name;

	// Size
	cout << "How large is your potato? (cm)";
	double circ;
	cin >> circ;

	// Weight
	cout << "How heavy is your potato? (g)";
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
}

void sortPotato(vector<potato> &potatoVector) {
	cout << "Sort Me!";
}

char menu() {
	char temp;
	// Print the menu
	do {
		cout << "+ Create a potato:	[c]\n";
		cout << "+ View your potatoes: [v]\n";
		cout << "+ Sort your potatoes: [s]\n";
		cout << "+ Exit					[x]\n";
		cin >> temp;
	} while (temp != 'c' && temp != 'C'
		&& temp != 'v' && temp != 'V'
		&& temp != 's' && temp != 'S'
		&& temp != 'x' && temp != 'X');
	
	return temp;
}

int main()
{
	// Create an array for potatos
	vector<potato> myArray;

	// Create and set a bool to keep the menu running
	bool createPotato = true;

	// Run the menu
	while (createPotato) {

		// Call the menu
		char thing = menu();

		// Respond to user input
		switch (thing) {
			case 'c':
			case 'C':
				newPotato(myArray);
				break;
			case 'v':
			case 'V':
				showPotato(myArray);
				break;
			case 's':
			case 'S':
				sortPotato(myArray);
				break;
			case 'x':
			case 'X':
			default:
				createPotato = false;
		}
	}

	return 0;
}
