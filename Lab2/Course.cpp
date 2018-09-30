#include "pch.h"
#include "Course.h"


Course::Course(string name, Teacher teacher) : teacher(teacher)
{
	this->name = name;
	students;
}

Course::~Course()
{
}

string Course::GetName()
{
	return name;
}

Teacher Course::GetTeacher()
{
	return teacher;
}

vector<Student> const & Course::GetStudents()
{
	return students;
}

bool StudentNamesEqual(Student & a, Student & b)
{
	return a.GetFirstName() == b.GetFirstName() && a.GetLastName() == b.GetLastName();
}

bool Course::AddStudent(Student & newStudent)
{
	for (auto existingStudent : students)
	{
		if (StudentNamesEqual(existingStudent, newStudent))
		{
			return false;
		}
	}

	students.push_back(newStudent);
	return true;
}