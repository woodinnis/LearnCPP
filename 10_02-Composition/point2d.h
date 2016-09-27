#pragma once

#include <iostream>

class Point2D {
private:
	int m_x;
	int m_y;

public:
	// Default constructor
	Point2D() :m_x(0), m_y(0) {}

	// Define points
	Point2D(int x, int y) :m_x(x), m_y(y) {}

	// Ouput operator
	friend std::ostream& operator<<(std::ostream &out, const Point2D point) {
		out << "(" << point.m_x << ", " << point.m_y << ")";
		return out;
	}

	// Access functions
	void setPoint(int x, int y) {
		m_x = x;
		m_y = y;
	}
};
