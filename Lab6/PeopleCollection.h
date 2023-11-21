#include "Human.h"
#include "Student.h"
#include "Teacher.h"
#include <iostream>
#include <functional>
#include <list>
#pragma once
using namespace std;
class PeopleCollection
{
private:
	list<Human> humanList;
	list<Student> studentList;
	list<Teacher> teacherList;
public:
	void addHuman(Human);
	void addStudent(Student);
	void addTeacher(Teacher);

	void removeHuman(Human&);
	void removeStudent(Student&);
	void removeTeacher(Teacher&);

	void removeLastHuman();
	void removeLastStudent();
	void removeLastTeacher();

	void removeFirstHuman();
	void removeFirstStudent();
	void removeFirstTeacher();

	list<Human> getHumanList();
	list<Student> getStudentList();
	list<Teacher> getTeacherList();

	void printHumanList();
	void printStudentList();
	void printTeacherList();

	bool hasHuman(Human);
	bool hasStudent(Student);
	bool hasTeacher(Teacher);

	/*
	Human *findHuman(Human);
	Student *findStudent(Student);
	Teacher *findTeacher(Teacher);
	*/

	list<Human> filterHumanList(std::function<bool(Human&)>);
	list<Student> filterStudentList(std::function<bool(Student&)>);
	list<Teacher> filterTeacherList(std::function<bool(Teacher&)>);
};

