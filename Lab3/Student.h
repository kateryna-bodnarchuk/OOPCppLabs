#pragma once
#include <string>
#include "pch.h"
#include "Gender.h"

using std::string;

class Student
{
public:
	Student(char const * firstName, char const * lastName, int age, Gender gender);
	Student(string & firstName, string & lastName, int age, Gender gender);
	void SetName(string & lastName);
	void SetName(string & lastName, string & firstName);
	string GetFirstName() const;
	string GetLastName() const;
	string Introduce();
	~Student();
private:
	string firstName;
	string lastName;
	int age;
	Gender gender;
	string GenderTitle(Gender gender);
};

