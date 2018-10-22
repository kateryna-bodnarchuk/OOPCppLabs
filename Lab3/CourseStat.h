#include "Teacher.h";
#include "Course.h"

#pragma once
class CourseStat : public Course
{
public:
	CourseStat(Teacher teacher);
	string GetName();
	~CourseStat();
};

