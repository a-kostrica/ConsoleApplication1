#include <iostream>
using namespace std;

class student {

protected:
    struct Birthday {
        int day;
        int monts;
        int year;
    };
    Birthday birthdays;
    string Name;
    string Surname;
    string Otch;
    string Gender;

public:

    student();
    student(string name, string surname, string otch, Birthday birthday, string gender);

    void SetName(string Name);
    void SetSurname(string Surname);
    void SetOtch(string otch);
    void SetBirthday(Birthday birthday);
    void SetGender(string gender);
    void info();
};