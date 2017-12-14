// 9_09OverloadingParenthesisOperator.cpp : Defines the entry point for the console application.
//

//	1) Write a class that holds a string. 
//	Overload operator() to return the substring that starts at the index of the first parameter, 
//	and includes however many characters are in the second parameter.

//	Hint: You can use array indices to access individual chars within the std::string
//	Hint : You can use operator+= to append something to a string

#include "stdafx.h"

using namespace std;

class MyString {
private:
	string m_string;
public:
	MyString(string str1 = " ") { m_string = str1; }
	string operator()(int startChar, int stringLength);
	friend ostream& operator<<(ostream &out, const MyString &str1);

	/*	The tutorial's solution using a for loop
	std::string operator()(int index1, int length)
	{
		std::string ret;
		for (int count = 0; count < length; ++count)
			ret += m_string[index1 + count];
		return ret;
	}
	*/
};

// My solution, using the .substr() function of the string class
string MyString::operator()(int startChar, int stringLength)
{
	string subString = m_string.substr(startChar, stringLength);
	return string(subString);
}


ostream & operator<<(ostream & out, const MyString & str1)
{
	out << str1.m_string;
	return(out);
}

int main()
{
	MyString string("Hello, World!");
	cout << string(7, 5);
	//cout << string;
    return 0;
}

