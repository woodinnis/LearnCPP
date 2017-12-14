// 8_5aConstructorMemberInitializer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

class RGBA {
private:
	uint8_t m_red;
	uint8_t m_green;
	uint8_t m_blue;
	uint8_t m_alpha;

public:
	//	Tutorial solution
	//RGBA(std::uint8_t red = 0, std::uint8_t green = 0, std::uint8_t blue = 0, std::uint8_t alpha = 255) :
	//	m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)

	//	Default constructor
	RGBA() : m_red{ 0 }, m_green{ 0 }, m_blue{ 0 }, m_alpha{ 255 }
	{}
	//	User assigned values
	RGBA(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255){
		m_red = r;
		m_green = g;
		m_blue = b;
		m_alpha = a;
	}
	// Print values
	void print() {
		cout << "Red: " << static_cast<int>(m_red) << '\n';
		cout << "Green: " << static_cast<int>(m_green) << '\n';
		cout << "Blue: " << static_cast<int>(m_blue) << '\n';
		cout << "Alpha: " << static_cast<int>(m_alpha) << '\n';
	}
};

int main()
{
	
	RGBA teal(0, 127, 127);
	teal.print();
	

    return 0;
}

