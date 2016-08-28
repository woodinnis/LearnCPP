// 6_xSectionQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Enum of the available inventory items
enum ITEMS{
	HEALTH_POTIONS,
	TORCHES,
	ARROWS,
	TOTAL_ITEMS
};

enum CARDS {
	CARD_ACE,
	CARD_TWO,
	CARD_THREE,
	CARD_FOUR,
	CARD_FIVE,
	CARD_SIX,
	CARD_SEVEN,
	CARD_EIGHT,
	CARD_NINE,
	CARD_TEN,
	CARD_JACK,
	CARD_QUEEN,
	CARD_KING,
	CARD_MAX
};

enum SUITS {
	SUIT_HEARTS,
	SUIT_DIAMONDS,
	SUIT_SPADES,
	SUIT_CLUBS,
	SUITS_MAX
};

struct Student {
	string STUDENT_NAME;
	int STUDENT_GRADE;
};

struct Card {
	CARDS CARD_VALUE;
	SUITS CARD_SUIT;
};

int countTotalItems(int inventory[]) {
	// Count the total number of items in inventory
	int total{ 0 };
	for (int count = 0; count < TOTAL_ITEMS; ++count)
		total += inventory[count];

	return total;
}

void studentInfo(vector<Student> &students) {
	
	for (auto &element : students) {
		// Prompt the user for a student's name
		cout << "Student Name: ";
		string name;
		cin >> name;
		element.STUDENT_NAME = name;

		// Prompt the user for a student's grade
		cout << "Student Grade: ";
		int grade;
		cin >> grade;
		element.STUDENT_GRADE = grade;
	}
}

void showStudents(vector<Student> students) {
	// Print out student details
	for (const auto &element : students) {
		cout << element.STUDENT_NAME << " got a grade of " << element.STUDENT_GRADE << '\n';
	}
}

void sortStudents(vector<Student> &students) {
	// Sort students by grade
	int size = static_cast<int>(students.size());

	for (int startIndex = 0; startIndex < size; ++startIndex) {
		int smallIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex) {
			// Sort the grades highest first
			if (students[currentIndex].STUDENT_GRADE > students[smallIndex].STUDENT_GRADE)
				smallIndex = currentIndex;
		}
		swap(students[startIndex], students[smallIndex]);
	}
}

void swapInt(int &x, int &y) {
	// Swap two integers
	int z = x;
	x = y;
	y = z;
}

void printCString(char cChar[], int indexCount) {
	
	for (int index = 0; index < indexCount; ++index) {
		if (cChar[index] != '\0')
			cout << cChar[index];
		else
			break;
	}
}

void printCard(const Card &card) {
	
	// Print the card value
	switch (card.CARD_VALUE) {
		case CARD_ACE:
			cout << "A";
			break;
		case CARD_TWO:
			cout << "2";
			break;
		case CARD_THREE:
			cout << "3";
			break;
		case CARD_FOUR:
			cout << "4";
			break;
		case CARD_FIVE:
			cout << "5";
			break;
		case CARD_SIX:
			cout << "6";
			break;
		case CARD_SEVEN:
			cout << "7";
			break;
		case CARD_EIGHT:
			cout << "8";
			break;
		case CARD_NINE:
			cout << "9";
			break;
		case CARD_TEN:
			cout << "10";
			break;
		case CARD_JACK:
			cout << "J";
			break;
		case CARD_QUEEN:
			cout << "Q";
			break;
		case CARD_KING:
			cout << "K";
			break;
		default:
			break;
	}

	// Print the card suit
	switch (card.CARD_SUIT) {
		case SUIT_HEARTS:
			cout << "H";
			break;
		case SUIT_DIAMONDS:
			cout << "D";
			break;
		case SUIT_CLUBS:
			cout << "C";
			break;
		case SUIT_SPADES:
			cout << "S";
			break;
		default:
			break;
	}

	cout << '\n';
}

void printDeck(const array<Card,52> &card) {

	for (const auto &element : card) {
		printCard(element);
	}
}

void swapCard(Card &card1, Card &card2) {
	Card temp;
	temp = card1;
	card1 = card2;
	card2 = temp;
}

void shuffleDeck(array<Card,52> &deck) {
	
	// Seed the RNG
	srand(static_cast<unsigned int>(time(0)));
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	
	// Randomly choose a number of times to shuffle the deck
	int shuffleNum = static_cast<int>(rand() * fraction * (50 - 25 + 1) + 25);

	// Shuffle the deck
	int shuffleCount = 0;
	do {

		// Choose a random card
		int card1 = static_cast<int>(rand() * fraction * 52);
		int card2;
		
		// Choose a different random card
		do
			card2 = static_cast<int>(rand() * fraction * 52);
		while (card2 == card1);

		// Swap the cards
		swapCard(deck[card1], deck[card2]);

		++shuffleCount;
	} while (shuffleCount < shuffleNum);
}

int getCardValue(const Card card) {

	// Return the value of the card submitted.
	switch (card.CARD_VALUE) {
		case CARD_TWO:		return 2;
		case CARD_THREE:	return 3;
		case CARD_FOUR:		return 4;
		case CARD_FIVE:		return 5;
		case CARD_SIX:		return 6;
		case CARD_SEVEN:	return 7;
		case CARD_EIGHT:	return 8;
		case CARD_NINE:		return 9;
		case CARD_TEN:		return 10;
		case CARD_JACK:		return 10;
		case CARD_QUEEN:	return 10;
		case CARD_KING:		return 10;
		case CARD_ACE:		return 11;
	}

	return 0;
}

bool playBlackjack(array<Card, 52> &Deck) {
	Card *cardPtr;
	int playerTotal{ 0 };
	int dealerTotal{ 0 };
}

int main()
{
	/*Q1 :{
		// Question 1: Create the base of an inventory system
		int inventory[TOTAL_ITEMS]{ 0 };

		// Fill the inventory using the enums
		inventory[HEALTH_POTIONS] = 2;
		inventory[TORCHES] = 5;
		inventory[ARROWS] = 10;

		cout << "Total items in inventory: " << countTotalItems(inventory) << "\n";
	};*/

	/*Q2:{
		// Question 2: Dynamically allocate an array and prompt a user to fill it with student names and grades
		
		// Create an empty vector
		vector<Student> students;

		// Prompt the user for a number of students
		cout << "Enter a number of students: ";
		int size;
		cin >> size;
		
		// Resize the vector to accomodate all the students
		students.resize(size);

		// Fill the vector
		studentInfo(students);

		// Sort the students
		sortStudents(students);

		// Show the student info
		showStudents(students);
	}*/

	/*Q3: {
			// Question 3: Write a function to swap two integer values
	
		cout << "Enter an integer: ";
		int int1{ 0 };
		cin >> int1;
		cout << "Enter an integer: ";
		int int2{ 0 };
		cin >> int2;

		swapInt(int1, int2);

		cout << "Values have been swapped: " << int1 << ", " << int2 << '\n';
	}*/

	/*Q4: { 
	
		// Question 4: Print a C-style string and print it char by char
	
		char cString[] = { "Hello, World!" };

		// FInd the total number of characters in the string
		int indexCount = sizeof(cString) / sizeof(cString[0]);

		// Print the string
		printCString(cString, indexCount);
		
	}*/

	// Question 6: Create a card shuffler
	array<Card, 52> card;

	int index{ 0 };
	for (int suitIndex = 0; suitIndex < SUITS_MAX; ++suitIndex) {
		for (int cardIndex = 0; cardIndex < CARD_MAX; ++cardIndex) {
			card[index].CARD_SUIT = static_cast<SUITS> (suitIndex);
			card[index].CARD_VALUE = static_cast<CARDS> (cardIndex);
			index++;
		}
	}
	
	shuffleDeck(card);
	//printDeck(card);
	
	cout << getCardValue(card[25]);
    return 0;
}

