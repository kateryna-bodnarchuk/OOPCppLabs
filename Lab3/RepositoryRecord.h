#pragma once

#include "Student.h"
#include "Course.h"

class RepositoryRecord
{
public:
	RepositoryRecord(Student student, Course course, int mark);
	string GetStudent();
	string GetCourse();
	int GetMark();
	string ToString();
	~RepositoryRecord();
private:
	Student student;
	Course course;
	int mark;
};

