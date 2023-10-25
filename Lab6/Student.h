#include <iostream>
#include <string>
#pragma once
using namespace std;
class Student
{
private:
    //task 5 - 6
    int age;
    string gender;
    int scholarship;
    //---

public:
    //task 1
    //int age;
    //string gender;
    //int scholarship;
    //---

    //task 4
    Student();
    Student(int);
    Student(int, string);
    Student(int, string, int);

    ~Student();
    //---

    void printData();

    //task 3
    void setAge(int);
    void setGender(string);
    void setScholarship(int);

    int getAge();
    int getScholarship();
    string getGender();
    //---
};

