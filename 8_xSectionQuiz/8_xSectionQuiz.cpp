// 8_xSectionQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

//	1a) Write a class named Point2d.Point2d should contain two member variables of type 
//	double : m_x, and m_y, both defaulted to 0.0.Provide a constructor and a print function.
//	1b) Now add a member function named distanceTo that takes another Point2d as a parameter, 
//	and calculates the distance between them.Given two points(x1, y1) and (x2, y2), 
//	the distance between them can be calculated as sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)).
//	The sqrt function lives in header cmath.
//	1c) Change function distanceTo from a member function to a non-member friend function 
//	that takes two Points as parameters. Also rename it “distanceFrom”.

class Point2d {
private:
	double m_x;
	double m_y;
public:
	Point2d(double x=0.0, double y=0.0) :m_x(x), m_y(y) {}

	void print() {
		cout << "Point 2d(" << m_x << ", " << m_y << ")\n";
	}

	friend double distanceFrom(Point2d &point1, Point2d &point2);

//	double const distanceTo(Point2d &p) {
//		return sqrt((m_x - p.m_x)*(m_x - p.m_x) + (m_y - p.m_y)*(m_y - p.m_y));
//	}
};

double distanceFrom(Point2d & point1, Point2d & point2)
{
	return sqrt((point1.m_x - point2.m_x)*(point1.m_x - point2.m_x) + (point1.m_y - point2.m_y)*(point1.m_y - point2.m_y));
}

//	2) Write a destructor for this class:

class HelloWorld
{
private:
	char *m_data;

public:
	HelloWorld(){
		m_data = new char[14]{ "Hello, World!" };
	}

	~HelloWorld(){
		delete[] m_data;
	}

	void print()
	{
		std::cout << m_data;
	}

};

//	3) Let’s create a random monster generator. This one should be fun.

//	3a) First, let’s create an enumeration of monster types named MonsterType.
//	Include the following monster types : Dragon, Goblin, Ogre, Orc, Skeleton, Troll, Vampire, and Zombie.
//	Add an additional MAX_MONSTER_TYPES enum so we can count how many enumerators there are.
//	3b) Now, let’s create our Monster class.Our Monster will have 4 attributes(member variables) : a type(MonsterType), 
//	a name(std::string), a roar(std::string), and the number of hit points(int).Create a Monster class that has these 4 member variables.
//	3c) enum MonsterType is specific to Monster, so move the enum inside the class as a public declaration.
//	3d) Create a constructor that allows you to initialize all of the member variables.

// 3f) Now we can create a random monster generator. Let’s consider how our MonsterGenerator class will work.
//	Ideally, we’ll ask it to give us a Monster, and it will create a random one for us. We don’t need more than one MonsterGenerator.
//	This is a good candidate for a static class (one in which all functions are static). Create an empty MonsterGenerator class.
//	Create a static function named generateMonster(). This should return a Monster. For now, make it return 
//	anonymous Monster(Monster::Skeleton, “Bones”, “*rattle*”, 4);

//	3h) Now edit function generateMonster() to generate a random MonsterType
//	(between 0 and Monster::MAX_MONSTER_TYPES - 1) and a random hit points(between 1 and 100).
//	This should be fairly straightforward.Once you’ve done that, define two static fixed arrays of size 6 inside the function(named s_names and s_roars)
//	and initialize them with 6 names and 6 sounds of your choice.Pick a random name from these arrays.

class Monster {
public:
	enum MonsterType {
		Dragon,
		Goblin,
		Ogre,
		Orc,
		Skeleton,
		Troll,
		Vampire,
		Zombie,
		MAX_MONSTER_TYPES
	};

	Monster(MonsterType t = Dragon, string n = "Dragon", string r = "ROAR!", int h = 100):
		m_type(t),m_name(n),m_roar(r),m_hitPoints(h) {}

	void print(){
		cout << m_name << " the " << getTypeString() << " has " << m_hitPoints << " hit points and says " << m_roar << ".\n";
	}

	string getTypeString() {
		switch (m_type) {
			case Dragon:
				return "Dragon";
			case Goblin:
				return "Goblin";
			case Ogre:
				return "Ogre";
			case Orc:
				return "Orc";
			case Skeleton:
				return "Skeleton";
			case Troll:
				return "Troll";
			case Vampire:
				return "Vampire";
			case Zombie:
				return "Zombie";
		}
	}


private:
	MonsterType m_type;
	string		m_name;
	string		m_roar;
	int			m_hitPoints;
};

class MonsterGenerator {
private:
public:
	static Monster generateMonster() {
		
		static array<string, 6> s_names{ "Bones", "Scales", "Gollum", "Lumpy", "Braineater", "Alucard"};
		static array<string, 6> s_roars{ "*rattle*", "*ROAR!*","*ARGH!*","*GRRRR!*","*UUUGGGGH*","What is a man? A miserable little pile of secrets! But enough talk! Have at you!" };
		
		// The tutorial uses individual variables for MonsterType and hitpoints, while I chose to return all elements as anonymous
		return Monster(static_cast<Monster::MonsterType>(getRandomNumber(0,Monster::MAX_MONSTER_TYPES - 1)),	// Generate a random type
			s_names[getRandomNumber(0, s_names.size() - 1)],													// Generate a random name
			s_roars[getRandomNumber(0, s_roars.size() - 1)],													// Generate a random roar
			getRandomNumber(1,100));																			// Generate a random HP
	}
	
	// Generate a random number between min and max (inclusive)
	// Assumes srand() has already been called
	static int getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
																		
		rand();		// Discard ther first rand() result								 // evenly distribute the random number across our range
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	}
};

int main()
{
	/*
	Point2d first;
	Point2d second(3.0, 4.0);
	first.print();
	second.print();

	cout << "Distance between two points: " << distanceFrom(first,second) << '\n';

	HelloWorld hello;
	//hello.print();
	*/

	srand(static_cast<unsigned int>(time(0)));

	Monster m = MonsterGenerator::generateMonster();	//skele(Monster::Skeleton, "Bones", "*rattle*", 4);
	m.print();

    return 0;
}

