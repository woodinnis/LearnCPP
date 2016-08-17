// AutoKeyword.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

char intToChar(int i) {

	auto c = static_cast<char>(i);

	return (c);
}

auto returnAThing(int a, int b) {

	return(a + b);
}

int main()
{
	auto i = 1;
    auto c = intToChar(i);
	auto a = returnAThing(i, i);
}

