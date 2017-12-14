// 9_x-SectionQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//	3) Write your own integer array class named IntArray from scratch (do not use std::array or std::vector).
//	Users should pass in the size of the array when it is created, and the array should be dynamically allocated.
//	Use assert statements to guard against bad data. Create any constructors or overloaded operators needed to make the following program operate correctly:

class IntArray
{
private:
	int m_length = 0;
	int *m_array = nullptr;

public:
	IntArray(int length) :
		m_length(length)
	{
		if (length <= 0)
			assert("IntArray length should be a positive integer");

		m_array = new int[m_length] { 0 };
	}

	// Copy constructor that does a deep copy
	IntArray(const IntArray &array) :
		m_length(array.m_length)
	{
		// Allocate a new array
		m_array = new int[m_length];

		// Copy elements from original array to new array
		for (int count = 0; count < array.m_length; ++count)
			m_array[count] = array.m_array[count];
	}

	~IntArray()
	{
		delete[] m_array;
	}

	// If you're getting crazy values here you probably forgot to do a deep copy in your copy constructor
	friend std::ostream& operator<<(std::ostream &out, const IntArray &array)
	{
		for (int count = 0; count < array.m_length; ++count)
		{
			std::cout << array.m_array[count] << ' ';
		}
		return out;
	}

	int& operator[] (const int index)
	{
		assert(index >= 0);
		assert(index < m_length);
		return m_array[index];
	}

	// Assignment operator that does a deep copy
	IntArray& operator= (const IntArray &array)
	{
		// self-assignment guard
		if (this == &array)
			return *this;

		// If this array already exists, delete it so we don't leak memory
		delete[] m_array;

		m_length = array.m_length;

		// Allocate a new array
		m_array = new int[m_length];

		// Copy elements from original array to new array
		for (int count = 0; count < array.m_length; ++count)
			m_array[count] = array.m_array[count];

		return *this;
	}

};
IntArray fillArray()
{
	IntArray a(5);
	a[0] = 5;
	a[1] = 8;
	a[2] = 2;
	a[3] = 3;
	a[4] = 6;

	return a;
}

int main()
{
	IntArray a = fillArray();
	std::cout << a << '\n';

	IntArray b(1);
	a = a;
	b = a;

	std::cout << b << '\n';

	return 0;
}