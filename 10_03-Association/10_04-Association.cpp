// 10_04-Association.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

//	Declare Doctor to account for circular dependancy
class Doctor;

class Patient {
private:
	std::string m_name;
	std::vector<Doctor*> m_doctor;	//	So we can use it here

	//	Make addDoctor private, users can use addPatient
	void addDoctor(Doctor *doc);

public:
	Patient(std::string name):m_name(name){}

	//	<< Will be implemented below since it needs Doctor to be defined
	friend std::ostream& operator<<(std::ostream &out, const Patient &pat);

	std::string getName() const { return m_name; }

	//	Friending Doctor so that the class can access the addDoctor function
	friend Doctor;
};

class Doctor {
private:
	std::string m_name;
	std::vector<Patient*> m_patient;

public:
	Doctor(std::string name) :m_name(name) {}

	void addPatient(Patient *pat) {
		//	Add a patient to this Doctor's list
		m_patient.push_back(pat);

		//	This patient will also add this Doctor
		pat->addDoctor(this);
	}

	friend std::ostream& operator<< (std::ostream &out, const Doctor &doc) {
		unsigned int length = doc.m_patient.size();
		if (length == 0) {
			out << doc.m_name << " has no patients right now.\n";
			return out;
		}

		out << doc.m_name << " is seeing patients: ";
		for (unsigned int count = 0; count < length; ++count) {
			out << doc.m_patient[count]->getName() << ", ";
		}

		return out;
	}

	std::string getName() const { return m_name; }
};

void Patient::addDoctor(Doctor *doc) {
	m_doctor.push_back(doc);
}

std::ostream & operator<<(std::ostream & out, const Patient & pat)
{
	unsigned int length = pat.m_doctor.size();
	if(length == 0){
		out << pat.getName() << " has no doctors right now.\n";
		return out;
	}

	out << pat.getName() << " is seeing doctors: ";
	for (unsigned int count = 0; count < length; ++count) {
		out << pat.m_doctor[count]->getName() << ", ";
	}
	return out;
}

int main()
{
	//	Create a patient outside the scope of the doctor
	Patient *p1 = new Patient("Dave");
	Patient *p2 = new Patient("Frank");
	Patient *p3 = new Patient("Betsy");

	Doctor *d1 = new Doctor("James");
	Doctor *d2 = new Doctor("Scott");

	d1->addPatient(p1);

	d2->addPatient(p1);
	d2->addPatient(p3);
	
	std::cout << *d1 << '\n';
	std::cout << *d2 << '\n';
	std::cout << *p1 << '\n';
	std::cout << *p2 << '\n';
	std::cout << *p3 << '\n';

    return 0;
}

