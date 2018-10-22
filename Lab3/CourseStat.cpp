#include "pch.h"
#include "CourseStat.h"


CourseStat::CourseStat(Teacher teacher) : Course(teacher)
{
}


string CourseStat::GetName()
{
	return "Statistics";
}

CourseStat::~CourseStat()
{
}
