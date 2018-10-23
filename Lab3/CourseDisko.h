#pragma once

#include "Course.h"
class CourseDisko : public Course
{
public:
	CourseDisko();
	string GetName() { return "Disko"; }
	~CourseDisko();
};

