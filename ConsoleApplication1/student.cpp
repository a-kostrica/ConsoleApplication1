#include <iostream>
#include "student.h"

using namespace std;

student::student()
{

}

student::student(string name, string surname, string otch, Birthday birthday, string gender)
{
	SetName(name);
	SetSurname(surname);
	SetGender(gender);
	SetOtch(otch);
	SetBirthday(birthday);
}

void student::info() 
{
	cout << "���: " << Name << "\n�������: " << Surname << "\n��������: "<< Otch << "\n���� ��������: " << birthdays.day << "." << birthdays.monts << "." << birthdays.year << "." << "\n������: " << Gender;
}

void student::SetName(string name)
{
	Name = name;
}

void student::SetSurname(string surname)
{
	Surname = surname;
}

void student::SetOtch(string otch)
{
	Otch = otch;
}

void student::SetGender(string gender)
{
	Gender = gender;
}

void student::SetBirthday(Birthday birthday)
{
	birthdays.day = birthday.day;
	birthdays.monts = birthday.monts;
	birthdays.year = birthday.year;
}