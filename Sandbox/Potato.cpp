#include "stdafx.h"
#include "Potato.h"


Potato::Potato(string n, double c, double w, string fc, string pc, string t) {
	setPotato(n, c, w, fc, pc, t);
}

void Potato::setPotato(string n, double c, double w, string fc, string pc, string t) {
	name = n;
	circ = c;
	weight = w;
	fleshColour = fc;
	peelColour = pc;
	texture = t;
}

void Potato::newPotato() {
	// Add a new potato to the vector list of potatos

	// Prompt the user for details about their potato

	// Name
	cout << "Please name your potato: ";
	cin >> name;

	// Size
	cout << "How large is your potato? ";
	cin >> circ;

	// Weight
	cout << "How heavy is your potato? ";
	cin >> weight;

	// Flesh colour
	cout << "What colour is the flesh of your potato? ";
	cin >> fleshColour;

	// Peel colour
	cout << "What colour is the peel of your potato? ";
	cin >> peelColour;

	// Texture
	cout << "What is the texture of your potato? ";
	cin >> texture;
}

void Potato::showPotato()
{
	cout << name << " the potato has " << peelColour << " skin, " << fleshColour << " flesh, and feels " << texture << " inside.\n";
	cout << name << " is " << circ << " around, and weighs " << weight << '\n';
}
