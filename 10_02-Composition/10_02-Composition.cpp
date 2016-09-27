// 10_02-Composition.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "creature.h"
#include "point2d.h"

int main()
{
	using namespace std;
	cout << "Enter a name for your creature: ";
	std::string name;
	cin >> name;
	Creature creature(name, Point2D(4, 7));

	while (1) {
		// Print the creature's name and position
		cout << creature << endl;
		
		cout << "Enter new X coordinate (-1 to quit): ";
		int x = 0;
		cin >> x;
		if (x == -1)
			break;

		cout << "Enter new Y coordinate (-1 to quit): ";
		int y = 0;
		cin >> y;
		if (y == -1)
			break;

		creature.moveTo(x, y);
	}

	return 0;
}