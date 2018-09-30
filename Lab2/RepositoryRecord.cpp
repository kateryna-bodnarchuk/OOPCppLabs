#include "pch.h"
#include "RepositoryRecord.h"


RepositoryRecord::RepositoryRecord(Student student, Course course, int mark)
	: student(student), course(course), mark(mark)
{
}

string RepositoryRecord::GetStudent()
{
	return student.GetFirstName() + " " + student.GetLastName();
}

string RepositoryRecord::GetCourse()
{
	return course.GetName();
}

int RepositoryRecord::GetMark()
{
	return mark;
}

string RepositoryRecord::ToString()
{
	return "Student " + student.GetFirstName() + " " + 
		student.GetLastName() + " on course " + course.GetName()
		+ " with teacher " + course.GetTeacher().GetFirstName()
		+ " " + course.GetTeacher().GetLastName()
		+ " has mark " + std::to_string(mark);
}

RepositoryRecord::~RepositoryRecord()
{
}
