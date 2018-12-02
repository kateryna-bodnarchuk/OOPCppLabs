#pragma once

#include "pch.h"
#include "Gender.h"

using std::string;
using std::wstring;

class Student
{
public:
	Student(const wstring & firstName, const wstring & lastName);
	void SetName(wstring & lastName);
	void SetName(wstring & lastName, wstring & firstName);
	wstring GetFirstName() const;
	wstring GetLastName() const;
	wstring Introduce();
	~Student();
private:
	wstring firstName;
	wstring lastName;
};

