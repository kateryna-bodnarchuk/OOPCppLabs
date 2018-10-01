#include "pch.h"
#include "Student.h"

using std::cout;

Student::Student(char const * firstName, char const * lastName, int age, Gender gender) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
	this->gender = gender;
}

Student::Student(string & firstName, string & lastName, int age, Gender gender)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
	this->gender = gender;
}

void Student::SetName(string & lastName)
{
	this->lastName = lastName;
}

void Student::SetName(string & lastName, string & firstName)
{
	this->lastName = lastName;
	this->firstName = firstName;
}

string Student::GetFirstName() const
{
	return firstName;
}

string Student::GetLastName() const
{
	return lastName;
}

string Student::Introduce()
{
	string nameOut = "My name is " + firstName + " " + lastName;
	string ageOut = "I'm " + std::to_string(age) + " years old.";
	string genderOut = "My gender is " + GenderTitle(gender) + ".";
	return "Hello. " + nameOut + " " + ageOut + " " + genderOut;
}

Student::~Student()
{
	
}

string Student::GenderTitle(Gender gender)
{
	switch (gender)
	{
	case Male: return "Man";
	case Female: return "Girl";
	default: throw std::exception();
	}
}
