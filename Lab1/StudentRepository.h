#pragma once

#include <vector>
#include "StudentInfo.h"
using std::vector;

class StudentRepository
{
public:
	StudentRepository();
	~StudentRepository();
	vector<StudentInfo>* GetStudentInfoVector();
	void AddStudentInfo(StudentInfo& studentInfo);
	void Clear();
private:
	static const string filePath;
	static const string header;
};

