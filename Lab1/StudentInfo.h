#pragma once

#include <string>
using std::string;

class StudentInfo
{
public:
	StudentInfo(
		string& firstName,
		string& lastName,
		string& address,
		string& phone);

	string GetFirstName() const;
	string GetLastName() const;
	string GetAddress() const;
	string GetPhone() const;

	~StudentInfo();
private:
	string firstName;
	string lastName;
	string address;
	string phone;
};