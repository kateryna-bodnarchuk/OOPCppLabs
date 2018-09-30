#include "pch.h"
#include "StudentRepository.h"
#include <iostream>
#include <fstream>
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::endl;

StudentRepository::StudentRepository()
{
}

vector<StudentInfo>* StudentRepository::GetStudentInfoVector()
{
	ifstream stream{ this->filePath };
	if (!stream.good())
	{
		return new vector<StudentInfo>();
	}
	if (stream.fail())
	{
		std::cerr << "Cannot open file.";
		exit(1);
	}

	vector<StudentInfo>* resultVector = new vector<StudentInfo>();
	while (!stream.eof())
	{
		string initLine;
		stream >> initLine;
		if (initLine != header)
		{
			break;
		}
		string firstName;
		stream >> firstName;
		string lastName;
		stream >> lastName;
		string address;
		stream >> address;
		string phone;
		stream >> phone;
		auto student = StudentInfo{ firstName, lastName, address, phone };

		resultVector->push_back(student);
	}
	stream.close();
	return resultVector;
}

void StudentRepository::AddStudentInfo(StudentInfo & studentInfo)
{
	ofstream stream{ this->filePath, std::ios_base::app };
	if (stream.fail())
	{
		std::cerr << "Cannot open file.";
		exit(1);
	}

	stream << header << std::endl;
	stream << studentInfo.GetFirstName() << std::endl;
	stream << studentInfo.GetLastName() << std::endl;
	stream << studentInfo.GetAddress() << std::endl;
	stream << studentInfo.GetPhone() << std::endl;
	stream.close();
}

void StudentRepository::Clear()
{
	ofstream stream{ this->filePath };
	if (stream.fail())
	{
		std::cerr << "Cannot open file.";
		exit(1);
	}
	stream.close();
}

const string StudentRepository::filePath = "StudentInfo.txt";
const string StudentRepository::header = "#student";


StudentRepository::~StudentRepository()
{
}
