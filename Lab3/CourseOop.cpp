#include "pch.h"
#include "CourseOop.h"


CourseOop::CourseOop(Teacher & teacher)
	: 
	Course(teacher),
	knowledgeSet()
{
	knowledgeSet.push_back("C++ Inheritence");
	knowledgeSet.push_back("C++ Exceptions");
}

string CourseOop::GetName()
{
	return "Object Oriented Programming";
}

void CourseOop::Teach()
{
	for (Student* student : GetStudents())
	{
		for (string knowledge : knowledgeSet)
		{
			student->GetHead().AddKnowledge(knowledge);
		}
	}
}

CourseOop::~CourseOop()
{
}
