#pragma once

#include "pch.h"
using std::vector;
using std::string;

class StudentHead
{
public:
	StudentHead();
	void AddKnowledge(const string& knowledge);
	string GetKnowledge();
	~StudentHead();
private: 
	vector<string> knowledgeCollection;
};

