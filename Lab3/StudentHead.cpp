#include "pch.h"
#include "StudentHead.h"
#include "KnowledgeException.h"


StudentHead::StudentHead()
{
}

void StudentHead::AddKnowledge(const string& knowledge)
{
	if (knowledge.length() == 0) {
		throw KnowledgeException();
	}

	knowledgeCollection.push_back(knowledge);
}

string StudentHead::GetKnowledge()
{
	string result = "";
	for (size_t i = 0; i < knowledgeCollection.size(); i++)
	{
		result += knowledgeCollection[i];
		if (i < (knowledgeCollection.size() - 1)) {
			result += ", ";
		}
	}
	return result;
}


StudentHead::~StudentHead()
{
}
