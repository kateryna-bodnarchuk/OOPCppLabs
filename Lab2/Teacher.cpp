#include "pch.h"
#include "Teacher.h"

using std::string;

Teacher::Teacher(string & firstName, string & lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
}

string Teacher::GetFirstName()
{
	return firstName;
}

string Teacher::GetLastName()
{
	return lastName;
}

Teacher::~Teacher()
{
}
