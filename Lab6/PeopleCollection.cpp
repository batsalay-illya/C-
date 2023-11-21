#include "PeopleCollection.h"

void PeopleCollection::addHuman(Human human) { humanList.push_back(human); }
void PeopleCollection::addStudent(Student student) { studentList.push_back(student); }
void PeopleCollection::addTeacher(Teacher teacher) { teacherList.push_back(teacher); }

void PeopleCollection::removeHuman(Human& human) { humanList.remove(human); }
void PeopleCollection::removeStudent(Student& student) { studentList.remove(student); }
void PeopleCollection::removeTeacher(Teacher& teacher) { teacherList.remove(teacher); }

void PeopleCollection::removeLastHuman() { humanList.pop_back(); }
void PeopleCollection::removeLastStudent() { studentList.pop_back(); }
void PeopleCollection::removeLastTeacher() { teacherList.pop_back(); }

void PeopleCollection::removeFirstHuman() { humanList.pop_front(); }
void PeopleCollection::removeFirstStudent() { studentList.pop_front(); }
void PeopleCollection::removeFirstTeacher() { teacherList.pop_front(); }

list<Human> PeopleCollection::getHumanList() { return humanList; } 
list<Student> PeopleCollection::getStudentList() { return studentList; }
list<Teacher> PeopleCollection::getTeacherList() { return teacherList; }

void PeopleCollection::printHumanList()
{
	for (Human human : humanList)
	{
		human.printData(); 
		cout << endl;
	}
}
void PeopleCollection::printStudentList()
{
	for (Student student : studentList)
		student.printData();
}
void PeopleCollection::printTeacherList()
{
	for (Teacher teacher : teacherList)
		teacher.printData();
}

bool PeopleCollection::hasHuman(Human human)
{
	auto result = std::find(humanList.begin(), humanList.end(), human);

	if (result != humanList.end()) {
		return true;
	}
	else {
		std::cout << "Human not found in the list..." << std::endl;
		return false;
	}
}
bool PeopleCollection::hasStudent(Student student) {
	auto result = std::find(studentList.begin(), studentList.end(), student);

	if (result != studentList.end()) {
		return true;
	}
	else {
		std::cout << "Student not found in the list..." << std::endl;
		return false;
	}
}
bool PeopleCollection::hasTeacher(Teacher teacher) {
	auto result = std::find(teacherList.begin(), teacherList.end(), teacher);

	if (result != teacherList.end()) {
		return true;
	}
	else {
		std::cout << "Teacher not found in the list..." << std::endl;
		return false;
	}
}
/*
Human *PeopleCollection::findHuman(Human human)
{
	auto result = std::find(humanList.begin(), humanList.end(), human);

	if (result != humanList.end()) {
		return &(*result);
	}
	else {
		std::cout << "Human not found in the list..." << std::endl;
		return nullptr;
	}
}
Student* PeopleCollection::findStudent(Student student) {
	auto result = std::find(studentList.begin(), studentList.end(), student);

	if (result != studentList.end()) {
		return &(*result);
	}
	else {
		std::cout << "Student not found in the list..." << std::endl;
		return nullptr;
	}
}
Teacher* PeopleCollection::findTeacher(Teacher teacher) {
	auto result = std::find(teacherList.begin(), teacherList.end(), teacher);

	if (result != teacherList.end()) {
		return &(*result);
	}
	else {
		std::cout << "Teacher not found in the list..." << std::endl;
		return nullptr;
	}
}
*/

list<Human> PeopleCollection::filterHumanList(std::function<bool(Human&)> p)
{
	list<Human> result = humanList;
	result.remove_if([&p](Human& person) {
		return !p(person);
	});
	return result;
}
list<Student> PeopleCollection::filterStudentList(std::function<bool(Student&)> p)
{
	list<Student> result = studentList;
	result.remove_if([&p](Student& person) {
		return !p(person);
		});
	return result;
}
list<Teacher> PeopleCollection::filterTeacherList(std::function<bool(Teacher&)> p)
{
	list<Teacher> result = teacherList;
	result.remove_if([&p](Teacher& person) {
		return !p(person);
		});
	return result;
}
