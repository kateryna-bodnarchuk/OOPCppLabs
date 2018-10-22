#pragma once

#include "pch.h"

using std::string;

class Teacher
{
public:
	Teacher(string & firstName, string & lastName);
	string GetFirstName();
	string GetLastName();
	~Teacher();
private:
	string firstName;
	string lastName;
};

