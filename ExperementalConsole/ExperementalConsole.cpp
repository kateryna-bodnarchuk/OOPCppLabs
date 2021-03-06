// ExperementalConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "MyVector.h"

using std::vector;
using std::string;

void bar1(vector<int>& items)
{
	items.push_back(4);
}

void bar2(vector<int>* items)
{
	items->push_back(4);
}

void Foo()
{
	std::vector<int> v0{ 0, 1 };
	vector<int> v1{ 1, 2, 3 };
	vector<int>* v2 = new vector<int>{ 1, 2, 3 };
	bar1(v1);
	bar2(v2);
	delete(v2);
}

int main(int nArgs, char ** vArgs)
{
	MyVector v1{ 3 };
	v1[0] = 1;
	v1[1] = 2;
	v1[2] = 3;
	double& v1_2 = v1[2];
	 
	double v1_2copy = v1[2];

	string a { "Hello World!" };
	Foo();

    std::cout << "Hello World!" << '\n'; 
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
