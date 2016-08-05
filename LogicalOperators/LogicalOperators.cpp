// LogicalOperators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	bool bTrue(true);
	bool bFalse(false);
	bool bMisc(true);
	double dTest_1(5);
	double dTest_2(6);
	
	if (((bTrue && bMisc) == true) || bFalse == false)
		cout << "Pass\n";
	else
		cout << "Fail\n";
		
	if ((bFalse == false && bTrue == true) || bMisc == true)
		cout << "Pass\n";
	else
		cout << "Fail\n";

	bool bNewFalse(false);
	if ((bFalse == false && bTrue == true) || bNewFalse == false || bMisc == true)
		cout << "Pass\n";
	else
		cout << "Fail\n";
	
	double dTest_3(4);
	double dTest_4(3);
	double dTest_5(7);
	double dTest_6(8);
	if ((dTest_1 > dTest_2 || dTest_3 > dTest_4) && (dTest_5 > dTest_6))
		cout << "Fail\n";
	else
		cout << "Pass\n";

	if (!(dTest_5 > dTest_2 || dTest_4 > dTest_4))
		cout << "Pass\n";
	else
		cout << "Fail\n";

    return 0;
}

