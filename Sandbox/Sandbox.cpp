// Sandbox.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "utilities.h"
#include "Date.h"
#include "Potato.h"
#include "TestHeader.h"

using namespace std;

class Cents{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }

	// Overloaded operator fuction prototypes
	Cents operator+(int value);
	friend Cents operator-(const Cents &c1, const Cents &c2);

	Cents operator-() const;

	friend ostream& operator<< (ostream &out, const Cents &cents);
	friend istream& operator>> (istream &in, Cents &cents);

	int getCents() const { return m_cents; }
};

//	+ Operator overload function
Cents Cents::operator+(int value)
{
	return Cents(m_cents + value);
}
//	- Operator overload function
Cents operator-(const Cents &c1, const Cents &c2)
{
	return Cents(c1.getCents() - c2.getCents());
}

Cents Cents::operator-() const
{
	return Cents(-m_cents);
}

ostream & operator<<(ostream &out, const Cents &cents)
{
	out << "I have " << cents.getCents() << " cents.\n";

	return out;
}

istream& operator>> (istream &in, Cents &cents)
{
	in >> cents.m_cents;

	return in;
}

int main()
{
/*
	bool createPotato = true;

	while (createPotato) {
		
		char temp;
		do {
			cout << "Would you like to create a potato? [y/n]";
			cin >> temp;
		} while (temp != 'y' && temp != 'Y' && temp != 'n' && temp != 'N');
		
		if (temp == 'y' || temp == 'Y')
			newPotato(myArray);
		else
			createPotato = false;
	}

	for (const auto &element : myArray) {
		showVector(myArray);
	}
*/

	Potato potato;

	Cents c1(10);
	Cents dime(10);
	int c2;
	
	cout << "Enter a value: ";
	cin >> c2;

	Cents centSum = c1 + c2;

	cout << centSum;

	cout << "Negative dimes are worth " << (-dime) << '\n';
}

/*	Old sandbox stuff.

class Wanker {
private:
int m_int;
double m_double;
string m_string;

public:
Wanker() {}
Wanker(int x = 0 , double y = 0.0, string z = ""):
m_int( x ), m_double( y ), m_string( z ) {}

void showVars() const {
cout << "m_int is set to: " << m_int << '\n';
cout << "m_double is set to: " << m_double << '\n';
cout << "m_string is set to: " << m_string << '\n';
}
};

class MinMax {
private:
int m_min;
int m_max;
public:
MinMax(int min, int max) {
m_min = min;
m_max = max;
}

int getMin() { return m_min; }
int getMax() { return m_max; }

friend MinMax operator+(const MinMax &m1, const MinMax &m2);
friend MinMax operator+(const MinMax &m, int value);
friend MinMax operator+(int value, const MinMax m);

};

MinMax operator+(const MinMax &m1, const MinMax &m2) {
int min = m1.m_min < m2.m_min ? m1.m_min : m2.m_min;

int max = m1.m_max > m2.m_max ? m1.m_max : m2.m_max;

return MinMax(min, max);
}

MinMax operator+(const MinMax &m, int value) {
int min = m.m_min < value ? m.m_min : value;

int max = m.m_max > value ? m.m_max : value;

return MinMax(min, max);
}
MinMax operator+(int value, const MinMax m) {
return (m + value);
}

void referenceMe(int &ref) {
	ref++;
}

void showArray(array<int, 10> thisArray) {
	for (const auto &element : thisArray)
		cout << element << " ";

	cout << '\n';
}

void showVector(vector<int> myVector) {
	for (int count = 0; count < myVector.size(); ++count)
		cout << myVector[count] << '\n';
}

potatoVector[pVectorIndex].name = name;
potatoVector[pVectorIndex].circ = circ;
potatoVector[pVectorIndex].weight = weight;
potatoVector[pVectorIndex].fleshColour = flesh;
potatoVector[pVectorIndex].peelColour = peel;
potatoVector[pVectorIndex].texture = texture;

void structRef(potato &ref) {
ref.fleshColour = "green";
}

void showVector(vector<potato> myVector) {
	for (const auto &element : myVector) {
		cout << "The potato is named " << element.name << '\n';
		cout << element.name << " is " << element.circ << " around\n";
		cout << element.name << " weighs " << element.weight << '\n';
		cout << element.name << "'s insides are " << element.fleshColour << '\n';
		cout << element.name << "'s peel is " << element.peelColour << '\n';
		cout << element.name << " feels like " << element.texture << " on the inside \n";
		cout << '\n';
	}
}
// Resize potatoVector
potatoVector.resize(potatoVector.size() + 1);

// Get new size and create an index for use
int pVectorIndex = potatoVector.size() - 1;

// Create a reference to the new index
potato &ref = potatoVector[pVectorIndex];

// Create the new entry
ref.name = name;
ref.circ = circ;
ref.weight = weight;
ref.fleshColour = flesh;
ref.peelColour = peel;
ref.texture = texture;

*/


