#include "pch.h"
#include "CourseStat.h"


CourseStat::CourseStat(Teacher & teacher) : Course(teacher)
{
}


string CourseStat::GetName()
{
	return "Statistics";
}

void CourseStat::Teach() {
	for (Student* student : GetStudents())
	{
		student->GetHead().AddKnowledge("Binomial Distribution");
	}
}

CourseStat::~CourseStat()
{
}
