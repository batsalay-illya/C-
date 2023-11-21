#include "Human.h"
#include <iostream>
#include <string>

Human::Human()
{
    name = "None";
    surname = "None";
    age = 0;
    gender = "None";
}
Human::Human(string name, string surname, int age, string gender)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->gender = gender;
}

//Human::~Human() { cout << "name: " << name << ", surname: " << surname << "age: " << age << ", gender: " << gender << " - has deleted" << endl; }

void Human::printData()
{
    cout << "name: " << name << ", surname: " << surname << ", age: " << age << ", gender : " << gender;
}

void Human::setName(string name) { this->name = name; }
void Human::setSurname(string surname) { this->surname = surname; }
void Human::setAge(int age) { this->age = age; }
void Human::setGender(string gender) { this->gender = gender; }

string Human::getName() { return name; }
string Human::getSurname() { return surname; }
int Human::getAge() { return age; }
string Human::getGender() { return gender; }

bool Human::operator==(const Human& other) const {
    return name == other.name && surname == other.surname && age == other.age && gender == other.gender;
}