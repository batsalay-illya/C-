#include "Student.h"
#include <iostream>
#include <string>

//task 4
Student::Student()
{
    age = 0;
    gender = "None";
    scholarship = 0;
}
Student::Student(int age)
{
    this->age = age;
    gender = "None";
    scholarship = 0;
}
Student::Student(int age, string gender)
{
    this->age = age;
    this->gender = gender;
    scholarship = 0;
}
Student::Student(int age, string gender, int scholarship)
{
    this->age = age;
    this->gender = gender;
    this->scholarship = scholarship;
}

Student::~Student() { cout << "Student age: " << age << ", gender: " << gender << ", scholarship: " << scholarship << " - has deleted" << endl; }
//---

void Student::printData()
{
    cout << "Age: " << age << ", gender: " << gender << ", scholarship: " << scholarship << endl;
}

//task 3
void Student::setAge(int age) { this->age = age; }
void Student::setGender(string gender) { this->gender = gender; }
void Student::setScholarship(int scholarship) { this->scholarship = scholarship; }

int Student::getAge() { return age; }
int Student::getScholarship() { return scholarship; }
string Student::getGender() { return gender; }
//---