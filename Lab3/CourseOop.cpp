#include "pch.h"
#include "CourseOop.h"


CourseOop::CourseOop(Teacher & teacher)
	: Course(teacher)
{
}

string CourseOop::GetName()
{
	return "Object Oriented Programming";
}


CourseOop::~CourseOop()
{
}
