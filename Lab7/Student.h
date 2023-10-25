#include <iostream>
#include <string>
#pragma once
using namespace std;

class Student
{
private:
    int age;
    string gender;
    int scholarship;

public:
    Student();
    Student(int);
    Student(int, string);
    Student(int, string, int);


    void printData();

    void setAge(int);
    void setGender(string);
    void setScholarship(int);

    int getAge();
    int getScholarship();
    string getGender();
};

