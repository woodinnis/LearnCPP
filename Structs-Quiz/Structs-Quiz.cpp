// Structs-Quiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct Advertising {
	int adsShown = 0;
	double adsClicked = 0.0;
	double earnedAverage = 0.0;
};

struct Fraction {
	int numerator = 0;
	int denominator = 0;
};

void calculateDailyEarnings(Advertising webAds) {

	cout << "Number of ads shown to users: " << webAds.adsShown << endl;
	cout << "Percentage of users who clicked on ads: %" << webAds.adsClicked << endl;
	cout << "Average earnings per ad: " << webAds.earnedAverage << endl;

	double earnedAverage = webAds.earnedAverage / 100;
	cout << "Total Daily Earnings: $" << webAds.adsClicked*webAds.adsShown*earnedAverage;
}

void multiply(Fraction fractOne, Fraction fractTwo) {
	int newFractNum = fractOne.numerator * fractTwo.numerator;
	int newFractDen = fractOne.denominator * fractTwo.denominator;

	double newFract = static_cast<double>(newFractNum) / static_cast<double>(newFractDen);

	cout << "New Fraction: " << newFract << endl;
}

int main()
{
	/*
	Advertising webAds;
	cout << "Number of ads shown to users: ";
	cin >> webAds.adsShown;
	cout << "Percentage of users who clicked on ads: %";
	cin >> webAds.adsClicked;
	cout << "Average earnings per ad: $";
	cin >> webAds.earnedAverage;

	calculateDailyEarnings(webAds);
	*/
	Fraction fractionOne;
	cout << "Numerator One: ";
	cin >> fractionOne.numerator;
	cout << "Denominator One: ";
	cin >> fractionOne.denominator;
	
	Fraction fractionTwo;
	cout << "Numerator Two: ";
	cin >> fractionTwo.numerator;
	cout << "Denominator Two: ";
	cin >> fractionTwo.denominator;

	multiply(fractionOne, fractionTwo);

	return 0;
}

