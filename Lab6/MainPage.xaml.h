//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "pch.h"
#include "MainPage.g.h"
#include "Student.h"

using std::vector;

namespace Lab6
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		void AddStudentButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		vector<Student*> students;
		void PrintAllStudents_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
