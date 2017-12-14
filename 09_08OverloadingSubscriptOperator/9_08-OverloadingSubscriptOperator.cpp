// 9_08OverloadingSubscriptOperator.cpp : Defines the entry point for the console application.
//

//	1) A map is a class that stores elements as a key-value pair. The key must be unique, and is used to access the associated pair. 
//	In this quiz, we’re going to write an application that lets us assign grades to students by name, using a simple map class. 
//	The student’s name will be the key, and the grade (as a char) will be the value.

#include "stdafx.h"

using namespace std;

//	1a) First, write a struct named StudentGrade that contains the student’s name (as a std::string) and grade (as a char).

struct StudentGrade {
	string	STUDENT_NAME;
	char	STUDENT_GRADE;
};

//	1b) Add a class named GradeMap that contains a std::vector of StudentGrade named m_map. Add a default constructor that does nothing.

class GradeMap {
private:
	vector<StudentGrade> m_map;
public:
	GradeMap() {};

	char& operator[] (const string &name);
};

//	1c) Write an overloaded operator[] for this class. This class should take a std::string parameter, and return a reference to a char. 
//	In the body of the function, first iterate through the vector to see if the student’s name already exists (you can use a for-each loop for this). 
//	If the student exists, return a reference to the grade and you’re done. 
//	Otherwise, use the std::vector::push_back() function to add a StudentGrade for this new student. 
//	When you do this, std::vector will add a copy of your StudentGrade to itself (resizing if needed). 
//	Finally, we need to return a reference to the grade for the student we just added to the std::vector. 
//	We can access the student we just added using the std::vector::back() function.

char& GradeMap::operator[](const string &name)
{	
	for (auto &number : m_map) {
		if (number.STUDENT_NAME == name) {
			return number.STUDENT_GRADE;
		}
	}

	StudentGrade temp{ name, ' ' };

	m_map.push_back(temp);

	return m_map.back().STUDENT_GRADE;
}

int main()
{
//	GradeMap grades;
//	grades["Joe"] = 'A';
//	grades["Frank"] = 'B';
//	std::cout << "Joe has a grade of " << grades["Joe"] << '\n';
//	std::cout << "Frank has a grade of " << grades["Frank"] << '\n';
	GradeMap grades;
	char& gradeJoe = grades["Joe"];
	gradeJoe = 'A';
	char& gradeFrank = grades["Frank"];
	gradeFrank = 'B';
	std::cout << "Joe has a grade of " << gradeJoe << '\n';
	std::cout << "Frank has a grade of " << gradeFrank << '\n';
	return 0;
}

