// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int test()
{
	int userVariable1;
	int userVariable2;
	int userVariable3;
	int userVariable4;

	cout << "Session 6 Activity - Maths" << endl;
	cout << "Part 1: Subtraction" << endl;
	cout << "Please give me a number:";
	cin >> userVariable1;

	cout << "Please give me a second number:";
	cin >> userVariable2;
	cout << userVariable1;
	cout << "-";
	cout << userVariable2;
	cout << "=";
	int var1 = userVariable1 - userVariable2;
	cout << var1 << endl << endl;

	cout << "Part 2: Dividing by 2" << endl;
	cout << "Please give me a number:";
	cin >> userVariable3;
	cout << userVariable3;
	cout << "/2";
	cout << "=";
	int var2 = userVariable3 / 2;
	cout << var2 << " (Remainders not shown)" << endl << endl;
	
	cout << "Part 3: 5 Divided by a #" << endl;
	cout << "Please give me a number (no zeros):";
	cin >> userVariable4;
	while (userVariable4==0)
	{
		cout << "Input Error: 0's not allowed." << endl;
		cin >> userVariable4;
	}
	cout << "5";
	cout << "/";
	cout << userVariable4;
	cout << "=";
	int var3 = 5 / userVariable4;
	return var3;

}

void main()
{
	int var;
	var	= test();
	cout << var << endl;
}

