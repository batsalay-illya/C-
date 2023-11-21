#include "Teacher.h"
#include <iostream>
#include <string>

Teacher::Teacher(Human human, int salary) {
    this->name = human.getName();
    this->surname = human.getSurname();
    this->age = human.getAge();
    this->gender = human.getGender();
    this->salary = salary;
}
Teacher::Teacher(string name, string surname, int age, string gender, int salary)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->gender = gender;
    this->salary = salary;
}

void Teacher::printData()
{
    __super::printData();
    cout << ", salary: " << salary << endl;
}

void Teacher::setSalary(int age) { this->salary = salary; }
int Teacher::getSalary() { return salary; }

bool Teacher::operator==(const Teacher& other) const {
    return name == other.name && surname == other.surname && age == other.age && gender == other.gender && salary == other.salary;
}