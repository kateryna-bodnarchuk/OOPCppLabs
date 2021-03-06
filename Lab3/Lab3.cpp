// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Student.h"
#include "Course.h"
#include "CourseOop.h"
#include "CourseStat.h"
#include "CourseDisko.h"
#include "Repository.h"
#include <iostream>
#include "KnowledgeException.h"

using std::string;

int main()
{
	Student kateBodnarchuk("Kate", "Bodnarchuk", 34, Gender::Female);
	Student alexPetrov("Alex", "Petrov", 23, Gender::Male);
	Student nickPetrov("Nick", "Petrov", 22, Gender::Male);
	Teacher sergiyLysenko("Sergiy", "Lysenko");
	CourseOop objectOrientedProgramming(sergiyLysenko);
	objectOrientedProgramming.AddStudent(&kateBodnarchuk);
	objectOrientedProgramming.AddStudent(&alexPetrov);
	objectOrientedProgramming.AddStudent(&nickPetrov); 

	Teacher olenaPoplavska("Olena", "Poplavska");
	CourseStat statistics(olenaPoplavska);
	statistics.AddStudent(&kateBodnarchuk);

	CourseDisko disko;
	disko.AddStudent(&alexPetrov);
	disko.AddStudent(&nickPetrov);

	vector<Course*> courses;
	courses.push_back(&objectOrientedProgramming);
	courses.push_back(&statistics);
	courses.push_back(&disko);

	for (Course * course : courses)
	{
		course->Teach();
	}

	for (Course * course : courses)
	{
		std::cout << "Students on " << course->GetName() << " course:" << std::endl;
		for (auto student : course->GetStudents())
		{
			std::cout << student->Introduce() << std::endl;
		}
	}

	try
	{
		kateBodnarchuk.GetHead().AddKnowledge("");
		std::cout << std::endl << "It is possible to add empty knowledge :(" << std::endl;
	}
	catch (KnowledgeException exc)
	{
		std::cout << std::endl << "It is impossible to add empty knowledge :)" << std::endl;
	}

	std::getchar();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
