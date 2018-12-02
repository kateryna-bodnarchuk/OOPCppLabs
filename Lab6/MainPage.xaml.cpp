//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include "Student.h"

using std::wstring;

using namespace Lab6;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
}


void Lab6::MainPage::AddStudentButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	wstring firstName = wstring(this->FirstNameTextBox->Text->Begin(), this->FirstNameTextBox->Text->End());
	wstring lastName = wstring(this->LastNameTextBox->Text->Begin(), this->LastNameTextBox->Text->End());
	Student * newStudent = new Student(firstName, lastName);

	this->students.push_back(newStudent);

	this->FirstNameTextBox->Text = ref new Platform::String(L"");
	this->LastNameTextBox->Text = ref new Platform::String(L"");
}

void Lab6::MainPage::PrintAllStudents_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	wstring resultText;
	for (Student* item : this->students)
	{
		wstring itemText = item->Introduce();
		resultText += L" " + itemText + L".";
	}
	const wchar_t* textOld = resultText.c_str();
	this->ResultText->Text = ref new Platform::String(textOld);
}
