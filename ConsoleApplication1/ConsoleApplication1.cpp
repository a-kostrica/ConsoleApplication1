#include <iostream>
#include "student.h"

using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    student st("Максим", "Котиков", "Снойтерович", { 9, 12, 2000 }, "Мужской");
    st.info();
}