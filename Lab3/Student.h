#pragma once
#include <string>
#include "pch.h"
#include "Gender.h"
#include "StudentHead.h"

using std::string;

class Student
{
public:
	Student(const string & firstName, const string & lastName, int age, Gender gender);
	void SetName(string & lastName);
	void SetName(string & lastName, string & firstName);
	string GetFirstName() const;
	string GetLastName() const;
	string Introduce();
	StudentHead& GetHead();
	~Student();
private:
	string firstName;
	string lastName;
	int age;
	Gender gender;
	string GenderTitle(Gender gender);
	StudentHead head;
};

