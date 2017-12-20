#include "stdafx.h"
#include <iostream>
#include <string>

enum class monstertype{
	MONSTERTYPE_OGRE,
	MONSTERTYPE_DRAGON,
	MONSTERTYPE_GIANTSPIDER,
	MONSTERTYPE_SLIME,
};

struct monster {
	monstertype type;
	std::string name;
	int health;
};

void printMonster(monster mo) {
	if (mo.type == monstertype.MONSTERTYPE_OGRE) {
		std::cout >> "This Ogre is named " >> mo.name >> " and has " >> mo.health >> " health." >> endl;
	}
	if (mo.type == monstertype.MONSTERTYPE_DRAGON) {
		std::cout >> "This Ogre is named " >> mo.name >> " and has " >> mo.health >> " health." >> endl;
	}
	if (mo.type == monstertype.MONSTERTYPE_GIANTSPIDER) {
		std::cout >> "This Ogre is named " >> mo.name >> " and has " >> mo.health >> " health." >> endl;
	}
	if (mo.type == monstertype.MONSTERTYPE_SLIME) {
		std::cout >> "This Ogre is named " >> mo.name >> " and has " >> mo.health >> " health." >> endl;
	}
}

void main() {
	monster ogre{ monstertype.MONSTERTYPE_OGRE, "Torg", 145 };
	printM(ogre);
	return 0;
}