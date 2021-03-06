// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Student.h"
#include "Course.h"
#include "Repository.h"
#include <iostream>

using std::string;

int main()
{
	string kate("Kate");
	string bodnarchuk("Bodnarchuk");
	string alex("Alex");
	string petrov("Petrov");
	string nick("Nick");
	Student kateBodnarchuk(kate, bodnarchuk, 34, Gender::Female);
	Student alexPetrov(alex, petrov, 23, Gender::Male);
	Student nickPetrov(nick, petrov, 22, Gender::Male);
	string sergiy("Sergiy");
	string lysenko("Lysenko");
	Teacher sergiyLysenko(sergiy, lysenko);
	Course objectOrientedProgramming("Object Oriented Programming", sergiyLysenko);
	objectOrientedProgramming.AddStudent(kateBodnarchuk);
	objectOrientedProgramming.AddStudent(alexPetrov);
	objectOrientedProgramming.AddStudent(nickPetrov);

	std::cout << "Students on " << objectOrientedProgramming.GetName() << " course:" << std::endl;
	for (auto student : objectOrientedProgramming.GetStudents())
	{
		std::cout << student.Introduce() << std::endl;
	}

	string olena("Olena");
	string poplavska("Poplavska");
	Teacher olenaPoplavska(olena, poplavska);
	Course statistics("Statistics", olenaPoplavska);
	statistics.AddStudent(kateBodnarchuk);

	Repository repository;
	for (Student student : objectOrientedProgramming.GetStudents())
	{
		repository.Add(student, objectOrientedProgramming, 5);
	}

	vector<string>* items = repository.GetAllRecords();
	for (string & record : (*items))
	{
		std::cout << record << std::endl;
	}
	delete items;
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
