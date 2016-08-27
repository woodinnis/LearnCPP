// 6_xSectionQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>

using namespace std;

// Enum of the available inventory items
enum ITEMS{
	HEALTH_POTIONS,
	TORCHES,
	ARROWS,
	TOTAL_ITEMS
};

int countTotalItems(int inventory[]) {
	// Count the total number of items in inventory
	int total{ 0 };
	for (int count = 0; count < TOTAL_ITEMS; ++count)
		total += inventory[count];

	return total;
}

int main()
{
	// Question 1: Create the base of an inventory system
	int inventory[TOTAL_ITEMS]{ 0 };

	// Fill the inventory using the enums
	inventory[HEALTH_POTIONS] = 2;
	inventory[TORCHES] = 5;
	inventory[ARROWS] = 10;

	cout << "Total items in inventory: " << countTotalItems(inventory) << "\n";

    return 0;
}

