#include "pch.h"
#include "StudentInfo.h"


StudentInfo::StudentInfo(
	string& firstName,
	string& lastName,
	string& address,
	string& phone)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->address = address;
	this->phone = phone;
}

string StudentInfo::GetFirstName() const { return firstName; }
string StudentInfo::GetLastName() const { return lastName; }
string StudentInfo::GetAddress() const { return address; }
string StudentInfo::GetPhone() const { return phone; }

StudentInfo::~StudentInfo() {

}