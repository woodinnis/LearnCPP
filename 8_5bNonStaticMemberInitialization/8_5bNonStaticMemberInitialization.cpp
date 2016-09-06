// 8_5bNonStaticMemberInitialization.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>

using namespace std;

//	1) Update the following program to use non - static member initialization and member initializer lists.
class Ball
{
private:
	string m_color = "Black";
	double m_radius = 10.0;

public:
	
	Ball(){}
	// Constructor with only color parameter (radius will use default value)
	Ball(const string &color)
	{
		m_color = color;
	}

	// Constructor with only radius parameter (color will use default value)
	Ball(double radius)
	{
		m_radius = radius;
	}

	// Constructor with both color and radius parameters
	Ball(const string &color, double radius)
	{
		m_color = color;
		m_radius = radius;
	}

	void print()
	{
		cout << "color: " << m_color << ", radius: " << m_radius << '\n';
	}
};

int main()
{
	Ball def;
	def.print();

	Ball blue("blue");
	blue.print();

	Ball twenty(20.0);
	twenty.print();

	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();

	return 0;
}

