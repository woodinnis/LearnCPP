// 8_13QFriendFunctionsClasses.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

class Vector3d;

class Point3d
{
private:
	double m_x, m_y, m_z;

public:
	Point3d(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{

	}

	void print()
	{
		cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
	}

	void moveByVector(Vector3d &v);
	//{
		// implement this function as a friend of class Vector3d
		//m_x += v.m_x;
		//m_y += v.m_y;
		//m_z += v.m_z;
	//}
};

class Vector3d
{
private:
	double m_x, m_y, m_z;

public:
	Vector3d(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{

	}

	void print()
	{
		cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")\n";
	}

	// friend class Point3d;
	friend void Point3d::moveByVector(Vector3d &v);
};



void Point3d::moveByVector(Vector3d &v)
{
	// implement this function as a friend of class Vector3d
	m_x += v.m_x;
	m_y += v.m_y;
	m_z += v.m_z;
}


//	1a) Make Point3d a friend class of Vector3d, and implement function Point3d::moveByVector()
//	1b) Instead of making class Point3d a friend of class Vector3d, make member function Point3d::moveByVector a friend of class Vector3d.

int main()
{
	Point3d p(1.0, 2.0, 3.0);
	Vector3d v(2.0, 2.0, -3.0);

	p.print();
	p.moveByVector(v);
	p.print();

    return 0;
}

