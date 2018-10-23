#include "pch.h"
#include "Student.h"

using std::cout;

Student::Student(const string & firstName, const string & lastName, int age, Gender gender) :
	firstName(firstName),
	lastName(lastName),
	gender(gender),
	age(age),
	head()
{
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
	string introductionHead = "Hello. " + nameOut + " " + ageOut + " " + genderOut;
	string knowledge ="My knowledge is: " + head.GetKnowledge() + ".";
	return introductionHead + " " + knowledge;
}

StudentHead & Student::GetHead()
{
	return head;
}

Student::~Student()
{
}

string Student::GenderTitle(Gender gender)
{
	switch (gender)
	{
	case Male: return "Male";
	case Female: return "Female";
	default: throw std::exception();
	}
}
