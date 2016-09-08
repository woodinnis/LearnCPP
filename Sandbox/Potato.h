#pragma once
#define POTATO_H

#include <string>

using namespace std;

class Potato {
private:
	string name;
	double circ;
	double weight;
	string fleshColour;
	string peelColour;
	string texture;
public:
	Potato() {};
	Potato(string n, double c, double w, string fc, string pc, string t);

	void setPotato(string n, double c, double w, string fc, string pc, string t);

	void newPotato();
	
	void showPotato();
};