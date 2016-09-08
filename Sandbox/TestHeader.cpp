#include "stdafx.h"
#include "TestHeader.h"

int add(int x, int y)
{
	return x + y;
}

void scramble(string &x, string &y, string &z) {
	
	int newS = rand() % 3 + 1;

	string temp1;
	string temp2;

	switch (newS) {
		case 1: {
			temp1 = x;
			temp2 = y;
			x = z;
			y = temp1;
			z = temp2;
			break;
		}
		case 2: {
			temp1 = y;
			temp2 = z;
			z = x;
			x = temp1;
			y = temp2;
			break;
		}
		default:
			break;
	}
}

string message(string x, string y, string z)
{
	srand(time(0));
	rand();
	int test = rand() % 8 + 1;

	string newString{ "" };

	scramble(x, y, z);

	switch(test) {
		case 1:
		case 6:
			newString = "I " + x + " your " + y + " and you " + z + " it!\n";
			break;
		case 2:
		case 5:
			newString = "Your " + x + " reminds me of a " + y + " I knew once in " + z + "\n";
			break;
		case 3:
		case 4:
			newString = "My " + x + " could beat your " + y + " blindfolded, using only a " + z + "\n";
			break;
		case 7:
		case 8:
			newString = "Lets get " + x + " with " + y + " and see how " + z + " you really are.\n";
		default:
			break;	
	}
	return newString;
}
