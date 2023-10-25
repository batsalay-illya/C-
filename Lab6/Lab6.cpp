// Lab6.cpp
#include "Student.h"
#include "Date.h"
#include <iostream>

using namespace std;
int main()
{
    //task 1
    //Student.cpp/Student.h
    //---

    //task 2
    Student student_1 = Student(20, "Male", 1200);
    Student student_2 = Student(21, "Female", 1250);
    
    //student_1.age = 20;
    //student_1.gender = "Male";
    //student_1.scholarship = 1200;
    //student_2.age = 21;
    //student_2.gender = "Female";
    //student_2.scholarship = 1250;

    student_1.printData();
    student_2.printData();
    //---

    //task 3
    student_1.setAge(22);
    cout << "New age: " << student_1.getAge() << endl;

    student_2.setScholarship(1300);
    cout << "New scholarship: " << student_2.getScholarship() << endl;
    //---

    //task 4
    //Student.cpp/Student.h
    //---

    //task 5-6
    //Student.cpp/Student.h
    //---

    //task 7
    Student student_first = Student();
    Student student_second = Student();

    student_first.setAge(20);
    student_first.setGender("Male");
    student_first.setScholarship(1500);

    student_second.setAge(25);
    student_second.setGender("Female");
    student_second.setScholarship(1500);

    cout << "first student: age:" << student_first.getAge() << ", gender: " << student_first.getGender() << ", scholarship :" << student_first.getScholarship() << endl;
    cout << "second student: age:" << student_second.getAge() << ", gender: " << student_second.getGender() << ", scholarship :" << student_second.getScholarship() << endl;

    cout << "Mid age: " << (student_first.getAge() + student_second.getAge()) / 2 << endl;
    cout << "Scholarsip sum: " << student_first.getScholarship() + student_second.getScholarship() << endl;
    //---

    //task 8
    Date date_now = Date();
    date_now.setDay(3);
    date_now.setMonth(10);
    date_now.setYear(2023);

    date_now.printDateTypeDot();
    date_now.printDateTypeSlash();
    date_now.printDateTypeUS();
    //---

    
}
