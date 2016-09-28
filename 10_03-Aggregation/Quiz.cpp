//	10.3 Quiz

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>


class Teacher {
private:
	std::string m_name;

public:
	Teacher(std::string name) :m_name(name) {}

	std::string getName() { return m_name; }

};

class Department {
private:
	std::vector<Teacher*> m_teacher;

public:
	//	Set Teacher values
	Department() {}
	
	void add(Teacher *teacher) {
		m_teacher.push_back(teacher);
	}

	friend std::ostream& operator<< (std::ostream &out, const Department dept) {
		unsigned n = dept.m_teacher.size();
		out << "Department: ";

		for (int i = 0; i < n; ++i) {
			out << dept.m_teacher[i]->getName() << " ";
		}

		out << '\n';
		return out;
	}
};


//	2) Update the Teacher/Dept example so the Dept can handle multiple Teachers. 
//	The following code should execute:

int main()
{
	// Create a teacher outside the scope of the Department
	Teacher *t1 = new Teacher("Bob"); // create a teacher
	Teacher *t2 = new Teacher("Frank");
	Teacher *t3 = new Teacher("Beth");

	{
		// Create a department and use the constructor parameter to pass
		// the teacher to it.
		Department dept; // create an empty Department
		dept.add(t1);
		dept.add(t2);
		dept.add(t3);

		std::cout << dept;

	} // dept goes out of scope here and is destroyed

	std::cout << t1->getName() << " still exists!\n";
	std::cout << t2->getName() << " still exists!\n";
	std::cout << t3->getName() << " still exists!\n";

	delete t1;
	delete t2;
	delete t3;

	return 0;
}