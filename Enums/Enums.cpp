// Enums.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

enum Monster {
	MONSTER_ORC,
	MONSTER_GOBLIN,
	MONSTER_TROLL,
	MONSTER_OGRE,
	MONSTER_SKELETON
};

enum class Color {
	RED,
	GREEN,
	YELLOW,
	BLUE
};

int main()
{
	Monster monsterOne = MONSTER_TROLL;

	Color color = Color::RED;

	cout << "Monster is set to: " << monsterOne;	// enums are implicitly converted
	cout << endl;
	cout << "Color is set to: " << static_cast<int>(color);	// enum classes must be explicitly converted
	cout << endl;

    return 0;
}

