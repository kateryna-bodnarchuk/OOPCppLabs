#pragma once

#include <string>
#include "pch.h"

#include "Gender.h"

using std::string;

// 1. Визначити користувацький клас згідно варіанта завдань (не менше 8 полів). 
// 2. Клас повинен містити 3 загальні та 5 приватні елементи. Відобразити використання усіх полів даних в методах. 
class Student
{
public:
	Student(char const * firstName, char const * lastName, int age, Gender gender);
	Student(string & firstName, string & lastName, int age, Gender gender);
	void SetName(string & lastName);
	// 3. В класі визначити 4 методи, які опрацьовують описані дані (два методи мають бути перевантаженими). 
	void SetName(string & lastName, string & firstName);
	string GetFirstName() const;
	string GetLastName() const;
	void Dishonor();
	string Introduce();
	~Student();
private:
	string firstName;
	string lastName;
	int age;
	Gender gender;
	string GenderTitle(Gender gender);
};

