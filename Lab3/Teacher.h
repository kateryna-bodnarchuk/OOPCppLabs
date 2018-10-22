#pragma once

#include "pch.h"

using std::string;

class Teacher
{
public:
	Teacher(const string & firstName, const string & lastName);
	Teacher(const Teacher & other);
	string GetFirstName();
	string GetLastName();
	~Teacher();
private:
	string firstName;
	string lastName;
};

