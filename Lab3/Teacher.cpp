#include "pch.h"
#include "Teacher.h"

using std::string;

Teacher::Teacher(const string & firstName, const string & lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
}

Teacher::Teacher(const Teacher & other) {
	this->firstName = other.firstName;
	this->lastName = other.lastName;
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
