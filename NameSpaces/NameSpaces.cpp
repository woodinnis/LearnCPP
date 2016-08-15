// NameSpaces.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "foo.h"
#include "goo.h"
#include <iostream>

using namespace std;

int main()
{
	cout << foo::doSomething(3, 4);
    return 0;
}

