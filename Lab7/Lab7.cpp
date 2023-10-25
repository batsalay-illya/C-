// Lab7.cpp
#include "Student.h"
#include <iostream>
#include <iomanip>
using namespace std;

enum week {
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

int inputInt()
{
	int X;
	while (true)
	{
		cin >> X;
		if (!cin)
		{
			cout << "Incorrect input, try again: ";

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		else
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>().max(), '\n');
			return X;
		}
	}
}
char inputChar() {
	char c;
	cin >> c;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return c;
}

void task2() {
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			cout << "0";
		}
		cout << endl;
	}
}

void task3() {
	cout << "For cycle: ";
	for (int i = 100; i <= 200; i += 2)
	{
		cout << i << ',';
	}
	cout << endl;

	cout << "While cycle: ";
	int a = 100;
	while (a <= 200) {
		cout << a << ',';
		a += 2;
	}
	a = 100;
	cout << endl;

	cout << "Do...while cycle: ";
	do
	{
		cout << a << ',';
		a += 2;
	} while (a <= 200);
	cout << endl;
}

void task4(int min, int max) {
	int X;
	cout << "Enter number (" << min << " - " << max << "): ";
	while (true)
	{
		cin >> X;
		if (!cin)
		{
			cout << "Invalid value, try again: ";

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		else
		{
			if (X <= min || X > max)
			{
				cout << "Number is out of bounds: ";
				continue;
			}

			cin.clear();
			cin.ignore(numeric_limits<streamsize>().max(), '\n');
			break;
		}
	}
	cout << "Correct!" << endl;
}

void task9(int iteration_amount) {
	Student student;
	for (int i = 1; i <= iteration_amount; i++)
	{
		cout << "Student" << i << ") enter age: ";
		student.setAge(inputInt());
		cout << "Student" << i << ") enter gender: ";
		char gender[7];
		cin >> setw(7) >> gender; cin.ignore(numeric_limits<streamsize>().max(), '\n');
		student.setGender(gender);
		cout << "Student" << i << ") enter scholarship: ";
		student.setScholarship(inputInt());
		cout << "Student" << i << ") "; student.printData();
	}
}

void task10(int day) {
	cout << "Int switch(" << day << ")" << endl;
	switch (day)
	{
		case 1:
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesday" << endl;
			break;
		case 3:
			cout << "Wednesday" << endl;
			break;
		case 4:
			cout << "Thursday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Saturday" << endl;
			break;
		case 7:
			cout << "Sunday" << endl;
			break;

		default:
			cout << "Invalid input, try again: ";
			task10(inputInt());
			break;
	}
}
void task10(char day) {
	cout << "Char switch(" << day << ")" << endl;
	switch (day)
	{
		case 'M':
			cout << "Monday" << endl;
		break;
		case 'T':
			cout << "Tuesday" << endl;
			break;
		case 'W':
			cout << "Wednesday" << endl;
			break;
		case 't':
			cout << "Thursday" << endl;
			break;
		case 'F':
			cout << "Friday" << endl;
			break;
		case 'S':
			cout << "Saturday" << endl;
			break;		
		case 's':
			cout << "Sunday" << endl;
			break;
	default:
		cout << "Invalid input, try again: ";
		task10(inputChar());
		break;
	}
}
void task10(week day) {
	cout << "Enum switch(index = " << day << ")" << endl;
	switch (day)
	{
		case Monday:
			cout << "Monday" << endl;
			break;
		case Tuesday:
			cout << "Tuesday" << endl;
			break;
		case Wednesday:
			cout << "Wednesday" << endl;
			break;
		case Thursday:
			cout << "Thursday" << endl;
			break;
		case Friday:
			cout << "Friday" << endl;
			break;
		case Saturday:
			cout << "Saturday" << endl;
			break;
		case Sunday:
			cout << "Sunday" << endl;
			break;
	}
}

void task11(float score) {
	if (score < 5)
		cout << "Легке, немає руйнувань." << endl; return;

	if (score < 5.5)
		cout << "Середнє, невеликі руйнування." << endl; return;

	if (score < 6.5)
		cout << "Серйозне, руйнування та пошкодження стін." << endl; return;

	if (score < 7.5)
		cout << "Лихо, багато будинків та будинків пошкоджено." << endl; return;

	if (score > 7.5)
		cout << "" << endl;
}

void task12(int Watt) {
	switch (Watt)
	{
		case 25:
			cout << Watt << "Watt - 2500 hours." << endl;
			break;

		case 40:
		case 60:
			cout << Watt << "Watt - 1000 hours." << endl;
			break;

		case 75:
		case 100:
			cout << Watt << "Watt - 750 hours." << endl;
			break;

		case 150:
		case 200:
			cout << Watt << "Watt - 500 hours." << endl;
			break;

	default:
		cout << "No data by given watts..." << endl;
		break;
	}
}

int main()
{
	//task 1
	//for ( int x=0; x < 100; x++); x=99
	//---

	//task 2
	task2();
	//---

	//task 3
	task3();
	//---

	//task 4
	task4(-10, 10);
	//---

	//task 5
	//???
	//---

	//task 6
	//???
	//---

	//task 7
	// for (int counter = 0; counter <10; conter++); cout << “counter: ” << counter;
	// missing 'u' in 'conter++', remove ';' after cycle initialization and add 'cout' to braces
	// for (int counter = 0; counter <10; counter++) { cout << “counter: ” << counter; }
	//---

	//task 8
	// while (counter < 10) { cout << “counter: ” << counter; counter--;}
	// change 'counter--' to 'counter++' because 'counter--' cause endless cycle
	//---

	//task 9
	task9(1);
	//---

	//task 10
	task10(3);
	task10('M');
	task10(Wednesday);
	//---

	//task 11
	task11(5.4);
	//---

	//task 12
	task12(55);
	task12(40);
	//---

	//task 13
	// case 2: cout << "White\n"; default : cout << "Other\n";}
	// need to write "switch(int) {" and after case and default write "break;"
	/* 
	switch(i) {
		case 2:
			cout << "White\n"; 
		break;
		default:
			cout << "Other\n";
		break;
	}
	*/
	//---
}