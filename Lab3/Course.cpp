#include "pch.h"
#include "Course.h"


Course::Course(const Teacher & teacher) 
	: teacher(teacher)
{
	students;
}

Course::~Course()
{
}

Teacher Course::GetTeacher()
{
	return teacher;
}

vector<Student*> const & Course::GetStudents()
{
	return students;
}

bool StudentNamesEqual(Student & a, Student & b)
{
	return a.GetFirstName() == b.GetFirstName() && a.GetLastName() == b.GetLastName();
}

bool Course::AddStudent(Student* newStudent)
{
	for (auto existingStudent : students)
	{
		if (StudentNamesEqual(*existingStudent, *newStudent))
		{
			return false;
		}
	}

	students.push_back(newStudent);
	return true;
}