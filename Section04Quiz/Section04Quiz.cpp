// Section04Quiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

// typedefs are not used in the tutorial's solution, but they are part of section 04
typedef string t_MONSTERNAME;
typedef int t_MONSTERHEALTH;

enum MonsterType
{
	// I originally made this list as a series of consts
	// The tutorial solution of using an enum class is effectively the same and obviously better
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME
};

struct Monster {
	// Type, Name, and Health of monster
	MonsterType		MONSTER;
	t_MONSTERNAME	NAME;
	t_MONSTERHEALTH HEALTH;
};

string getMonsterType(Monster monster) {
	if (monster.MONSTER == MonsterType::OGRE)
		return "Ogre";
	if (monster.MONSTER == MonsterType::DRAGON)
		return "Dragon";
	if (monster.MONSTER == MonsterType::ORC)
		return "Orc";
	if (monster.MONSTER == MonsterType::GIANT_SPIDER)
		return "Giant Spider";
	if (monster.MONSTER == MonsterType::SLIME)
		return "Slime";
}
void printMonster(Monster monster) {
	// Print out the struct members of Monster

	cout << "This " << getMonsterType(monster);
	cout << " is named "<< monster.NAME<<" and has " << monster.HEALTH << " health." << endl;

	/* This was my original solution to the quiz.
	// It's far less optimized, and makes less use of important elements of C++
	if (monster.MONSTER == 0) {
	cout << "This ogre is named " << monster.NAME;
	}
	else if (monster.MONSTER == 1) {
	cout << "This dragon is named " << monster.NAME;
	}
	else if (monster.MONSTER == 2) {
	cout << "This orc is named " << monster.NAME;
	}
	else if (monster.MONSTER == 3) {
	cout << "This giant spider is named " << monster.NAME;
	}
	else
	cout << "This slime is named " << monster.NAME;
	*/
}
int main()
{
	Monster Ogre;
	Monster Slime;

	Ogre = { MonsterType::OGRE, "Torg", 145 };

	Slime.MONSTER	= MonsterType::SLIME;
	Slime.NAME		= "Blurp";
	Slime.HEALTH	= 23;

	printMonster(Ogre);
	printMonster(Slime);
    return 0;
}

