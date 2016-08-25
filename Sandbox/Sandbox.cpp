// Sandbox.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct potato {
	double circ;
	double weight;
	string colour;
};

void referenceMe(int &ref) {
	ref++;
}

void structRef(potato &ref) {
	ref.colour = "green";
}

int main()
{
	int var = 0;

	potato Potato;

	Potato.colour = "Gold";

	cout << "A number " << var << '\n';
	referenceMe(var);
	cout << "Tweeked: " << var << '\n';

	cout << "A nice " << Potato.colour << " potato.\n";
	structRef(Potato);
	cout << "Has just turned " << Potato.colour << '\n';
    return 0;

}

