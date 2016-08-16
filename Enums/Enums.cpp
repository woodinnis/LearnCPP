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

int main()
{
	Monster monsterOne = MONSTER_TROLL;

    return 0;
}

