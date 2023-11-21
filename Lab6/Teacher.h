#include "Human.h"
#include <iostream>
#include <string>
#pragma once
using namespace std;
class Teacher : public Human
{
private:
    int salary;

public:
    Teacher(Human, int);
    Teacher(string, string, int, string, int);

    void printData() override;

    void setSalary(int);
    int getSalary();

    bool operator==(const Teacher&) const;
};

