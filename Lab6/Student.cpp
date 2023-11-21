#include "Student.h"
#include <iostream>
#include <string>

Student::Student(Human human, int group, int scholarship)
{
    this->name = human.getName();
    this->surname = human.getSurname();
    this->age = human.getAge();
    this->gender = human.getGender();
    this->group = group;
    this->scholarship = scholarship;
}
Student::Student(string name, string surname, int age, string gender, int group, int scholarship)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->gender = gender;
    this->group = group;
    this->scholarship = scholarship;
}

void Student::printData()
{
    __super::printData();
    cout << ", group: " << group << ", scholarship: " << scholarship << endl;
}

void Student::setGroup(int group) { this->group = group; }
void Student::setScholarship(int scholarship) { this->scholarship = scholarship; }

int Student::getGroup() { return group; }
int Student::getScholarship() { return scholarship; }

bool Student::operator==(const Student& other) const {
    return name == other.name && surname == other.surname && age == other.age && gender == other.gender && group == other.group && scholarship == other.scholarship;
}