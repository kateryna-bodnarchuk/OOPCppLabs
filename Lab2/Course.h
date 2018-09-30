#pragma once

#include "Teacher.h"
#include "Student.h"
using std::vector;

class Course
{
public:
	Course(string name, Teacher teacher);
	~Course();
	string GetName();
	Teacher GetTeacher();
	vector<Student> const & GetStudents();
	bool AddStudent(Student& newStudent);
private:
	string name;
	Teacher teacher;
	vector<Student> students;
};

