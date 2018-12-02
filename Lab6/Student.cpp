#include "pch.h"
#include "Student.h"

using std::cout;

Student::Student(const wstring & firstName, const wstring & lastName) :
	firstName(firstName),
	lastName(lastName)
{
}

void Student::SetName(wstring & lastName)
{
	this->lastName = lastName;
}

void Student::SetName(wstring & lastName, wstring & firstName)
{
	this->lastName = lastName;
	this->firstName = firstName;
}

wstring Student::GetFirstName() const
{
	return firstName;
}

wstring Student::GetLastName() const
{
	return lastName;
}

wstring Student::Introduce()
{
	wstring nameOut = L"My name is " + firstName + L" " + lastName;
	return nameOut;
}

Student::~Student()
{
}