// 8_1PublicPrivateAccessSpecifiers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>

using namespace std;

class Point3d {
	double m_x;
	double m_y;
	double m_z;
public:
	void setValues(double x, double y, double z) {
		m_x = x;
		m_y = y;
		m_z = z;
	}
	void print() {
		cout << "<" << m_x << ", " << m_y << ", " << m_z << ">";
	}
};

class Stack{
	int m_numbers[10];
	int m_length{ 0 };

public:
	void reset() {
		m_length = 0;
	}
	bool push(int n) {
		if (m_length > 10)
			return false;
		else {
			m_numbers[m_length] = n;
			m_length++;
		}
	}
	int pop() {
		if (m_length > 0) {
			m_length--;
			return m_numbers[m_length];
		}
		else
			return -1;
	}
	void print() {
		cout << "( ";
		for (int index = 0; index < m_length; ++index) {
			cout << m_numbers[index] << " ";
		}
		cout << ")\n";
	};
};

int main()
{
	Point3d point;
	Stack stack;

	point.setValues(1.0, 2.0, 3.0);

//	point.print();

	stack.reset();

	stack.print();
	
	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();

    return 0;
}

