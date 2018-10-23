#pragma once

#include "Teacher.h"
#include "Student.h"
using std::vector;

class Course
{
public:
	Course(const Teacher & teacher);
	~Course();
	virtual string GetName() = 0;
	virtual void Teach() {
		// By default nothing happens
	}
	Teacher GetTeacher();
	vector<Student*> const & GetStudents();
	bool AddStudent(Student* newStudent);
private:
	Teacher teacher;
	vector<Student*> students;
};

