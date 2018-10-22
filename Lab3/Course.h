#pragma once

#include "Teacher.h"
#include "Student.h"
using std::vector;

class Course
{
public:
	Course(Teacher teacher);
	~Course();
	virtual string GetName() = 0;
	Teacher GetTeacher();
	vector<Student> const & GetStudents();
	bool AddStudent(Student& newStudent);
private:
	Teacher teacher;
	vector<Student> students;
};

