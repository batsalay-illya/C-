#include "Human.h"
#include <iostream>
#include <string>
#pragma once
using namespace std;
class Student : public Human
{
private:
    int group;
    int scholarship;

public:
    Student(Human, int, int);
    Student(string, string, int, string, int, int);

    void printData() override;

    void setGroup(int);
    void setScholarship(int);

    int getGroup();
    int getScholarship();

    bool operator==(const Student&) const;
};

