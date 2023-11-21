#include <iostream>
#include <string>
#pragma once
using namespace std;
class Human
{
protected:
    string name;
    string surname;
    int age;
    string gender;

public:
    Human();
    Human(string, string, int, string);

    //~Human();
    virtual void printData();

    void setName(string);
    void setSurname(string);
    void setAge(int);
    void setGender(string);

    string getName();
    string getSurname();
    int getAge();
    string getGender();

    bool operator==(const Human&) const;
};

