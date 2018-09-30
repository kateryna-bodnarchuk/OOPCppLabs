#pragma once

#include "Student.h"
#include "Course.h"
#include "Repository.h"
#include "RepositoryRecord.h"

using std::vector;
class Repository
{
public:
	Repository();
	void Add(Student student, Course course, int mark);
	vector<string>* GetAllRecords();
	~Repository();
private:
	vector<RepositoryRecord> records;
};

