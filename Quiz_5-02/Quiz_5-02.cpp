// Quiz_5-02.cpp : Defines the entry point for the console application.
//


// A basic hi-lo game
// My thought process in implementing the logic was the sae as the tutorial's 
// even though the final product is significantly different.

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int chooseANumber() {
	int myNumber;

	do {
		myNumber = rand();
	} while (myNumber > 100 || myNumber < 1);

	return myNumber;
}

int guessMyNumber(int myNumber) {
	
	cout << "I'm thinking of a number. Can you guess it in 7 tries?\n";

	int guessNumber{ 1 };
	int success{ 0 };
	do {
		cout << "Guess #" << guessNumber << ": ";
		int guess;
		cin >> guess;

		if (guess == myNumber) {
			success = 1;
			break;
		}
		else {
			if (guess > myNumber)
				cout << "Your guess is too high.\n";
			else if (guess < myNumber)
				cout << "Your guess is too low.\n";

			++guessNumber;
		}
	} while (guessNumber < 7);

	return success;
}

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	
	char playAgain{ 'n' };
	
	do {
		int myNumber = chooseANumber();

		int winLose = guessMyNumber(myNumber);
		
		if (winLose == 1)
			cout << "Yes! my number was " << myNumber << "!\n";
		else
			cout << "Sorry, my number was " << myNumber << ".\n";

		cout << "Would you like to play again? [y/n]\n";
		cin >> playAgain;
	} while (playAgain == 'y');

    return 0;
}

