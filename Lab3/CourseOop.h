#pragma once

#include "Course.h"

class CourseOop : public Course
{
public:
	CourseOop(Teacher & teacher);
	string GetName();
	void Teach() override;
	~CourseOop();
private:
	vector<string> knowledgeSet;
};

