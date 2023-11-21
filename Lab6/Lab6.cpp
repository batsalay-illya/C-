// Lab6.cpp
#include "PeopleCollection.h"
#include "Student.h"
#include "Teacher.h"
#include "Date.h"
#include <iostream>

using namespace std;

/*
void task8() {
    Date date_now = Date();
    date_now.setDay(3);
    date_now.setMonth(10);
    date_now.setYear(2023);

    date_now.printDateTypeDot();
    date_now.printDateTypeSlash();
    date_now.printDateTypeUS();
}
*/

int main()
{
    PeopleCollection collection;
    Human human_1 = Human("Ivan", "Ivanov", 21, "Male");
    Student student_1 = Student(human_1, 241, 1200);
    Student student_2 = Student("Lina", "Adams", 20, "Female", 241, 1250);

    Teacher teacher_1 = Teacher("Oleg", "Sidorov", 35, "Male", 3000);
    
    collection.addHuman(student_1);
    collection.addHuman(student_2);
    collection.addHuman(teacher_1);

    collection.addStudent(student_1);
    collection.addStudent(student_2);

    collection.addTeacher(teacher_1);

    collection.printHumanList();

    cout << "List after filtering (age>20):" << endl;

    list<Human> filteredList = collection.filterHumanList([](Human& person) { return person.getAge() > 20; });
    for (Human h : filteredList) {
        h.printData();
        cout << endl;
    }

    cout << "Remove element from list..." << endl;

    collection.removeStudent(student_2);
    collection.printStudentList();

    cout << "Student list contain student(student_1):" << boolalpha << (collection.hasStudent(student_1)) << endl;
}