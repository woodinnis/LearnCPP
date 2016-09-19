// 9_x-SectionQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//	2) Write a class named Average that will keep track of the average of all integers passed to it.Use two members:
//	The first one should be type int32_t, and used to keep track of the sum of all the numbers you’ve seen so far.
//	The second should be of type int8_t, and used to keep track of how many numbers you’ve seen so far.You can divide them to find your average.

class Average {
private:
	std::int32_t m_sum;
	std::int8_t m_totalNum;
	//double m_avg;
public:
	Average() {}
	
	//	Overload += operator
	friend Average& operator+= (Average &avg, const int value);
	
	//	Overload ostream operator
	friend std::ostream& operator<<(std::ostream &out, Average &avg);

	//	Calculate average
	double avg() {
		return (static_cast<double>(m_sum) / m_totalNum);
	}
};

Average& operator+=(Average &avg, const int value)
{
	++avg.m_totalNum;
	avg.m_sum += value;
	return avg;
}

std::ostream& operator<<(std::ostream &out, Average &avg)
{
	//out << "sum: " << avg.m_sum << '\n';
	//out << "count: " << static_cast<int>(avg.m_totalNum) << '\n';
	//out << "average: " << avg.avg();
	out << avg.avg();
	return out;
}

//	2a) Write all of the functions necessary for the following program to run :

int main()
{
	Average avg;

	avg += 4;
	std::cout << avg << '\n'; // 4 / 1 = 4

	avg += 8;
	std::cout << avg << '\n'; // (4 + 8) / 2 = 6

	avg += 24;
	std::cout << avg << '\n'; // (4 + 8 + 24) / 3 = 12

	avg += -10;
	std::cout << avg << '\n'; // (4 + 8 + 24 - 10) / 4 = 6.5

	(avg += 6) += 10; // 2 calls chained together
	std::cout << avg << '\n'; // (4 + 8 + 24 - 10 + 6 + 10) / 6 = 7

	Average copy = avg;
	std::cout << copy << '\n';

	return 0;
}