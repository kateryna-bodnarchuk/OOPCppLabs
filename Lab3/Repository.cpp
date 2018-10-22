#include "pch.h"
#include "Repository.h"


Repository::Repository()
{
}

void Repository::Add(Student student, Course course, int mark)
{
	records.push_back(RepositoryRecord(student, course, mark));
}

vector<string>* Repository::GetAllRecords()
{
	vector<string>* result = new vector<string>();
	for (RepositoryRecord & record : records)
	{
		result->push_back(record.ToString());
	}
	return result;
}


Repository::~Repository()
{
}
