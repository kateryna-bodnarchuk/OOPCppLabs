// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Task 13 : Create program that has info about N students(first name, last name, adress, phone)
//			Sort by last name and show sorted list with phone numbers.

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include "StudentInfo.h"
#include "StudentRepository.h"
#include "Lab1.h"
using std::cout;
using std::cin;
using std::endl;
using std::vector;

string ReadCinStringTitled(string title)
{
	cout << title << ": ";
	string value;
	cin >> value;
	return value;
}

StudentInfo ReadCinStudent()
{
	string firstName = ReadCinStringTitled("First Name");
	string lastName = ReadCinStringTitled("Last Name");
	string address = ReadCinStringTitled("Address");
	string phone = ReadCinStringTitled("Phone");
	StudentInfo studentCin{ firstName, lastName, address, phone };
	return studentCin;
}

void WriteCoutStringTitled(string title, const string& value)
{
	cout << title << ": " << value << endl;
}
void WriteCoutStudent(StudentInfo& student) {

	WriteCoutStringTitled("First Name", student.GetFirstName());
	WriteCoutStringTitled("Last Name", student.GetLastName());
	WriteCoutStringTitled("Address", student.GetAddress());
	WriteCoutStringTitled("Phone", student.GetPhone());
}

void AddStudent(StudentRepository& repository)
{
	StudentInfo studentCin = ReadCinStudent();
	cout << "Saving student\n";
	repository.AddStudentInfo(studentCin);
}

struct StudentComparisonByPhone {
	bool operator()(StudentInfo const &a, StudentInfo const &b) const {
		return a.GetPhone() < b.GetPhone();
	}
};

void PrintAllStudentsInfo(StudentRepository& repository)
{
	cout << "All Students info:\n";
	vector<StudentInfo>* students = repository.GetStudentInfoVector();

	for (int i = 0; i< students->size(); i++)
	{
		StudentInfo student = students->operator[](i);
		cout << "Student #" << i << endl;
		WriteCoutStudent(student);
	}

	delete students;
}

void PrintStudentsLastNameSortedByPhone(StudentRepository& repository)
{
	cout << "Students Last Name sorted by Phone:\n";
	vector<StudentInfo>* students = repository.GetStudentInfoVector();

	std::sort(
		students->begin(),
		students->end(),
		StudentComparisonByPhone()
	);

	for (int i = 0; i < students->size(); i++)
	{
		StudentInfo student = students->operator[](i);
		cout << student.GetLastName() << " : " << student.GetPhone() << endl;
	}

	delete students;
}


int main()
{
	cout << "Lab Work 1\n";

	StudentRepository repository;

	while (true) {
		cout << endl;
		cout << "Enter Command '0' to print all students, '1' to create new student, '2' to sort students by phone, '3' clear data file, '4' to exit: ";
		int command;
		cin >> command;

		switch (command) {
		case 0:
			PrintAllStudentsInfo(repository);
			break;
		case 1:
			AddStudent(repository);
			break;
		case 2:
			PrintStudentsLastNameSortedByPhone(repository);
			break;
		case 3:
			repository.Clear();
			break;
		case 4:
			return 0;
		default:
			cout << "Unknown command." << endl;
			break;
		}

		cout << endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
