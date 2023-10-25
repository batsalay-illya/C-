// Lab5.cpp
#include <iostream>
#include <iomanip>
#include "CustomFunctions.h"
using namespace std;

void task3() {
	cout << "Write X1: ";
	int x1 = CustomFunctions::inputInt();
	cout << "Write Y1: ";
	int y1 = CustomFunctions::inputInt();

	cout << "Write X2: ";
	int x2 = CustomFunctions::inputInt();
	cout << "Write Y2: ";
	int y2 = CustomFunctions::inputInt();
	CustomFunctions::distanceBetweenPoints(x1, y1, x2, y2);
}
void task5() {
	int arr[5];
	int* result;
	result = CustomFunctions::setRandomValues(arr);
	cout << "Random array: ";
	for (int i = 0; i < 5; i++)
	{
		cout << *(result + i) << " ";
	}
	cout << endl;
}
void task6() {
	char ch[5]{};
	cout << "Enter line C-style: ";
	cin >> setw(5) >> ch; cin.clear(); cin.ignore(numeric_limits<streamsize>().max(), '\n');
	CustomFunctions::charToIntLongDouble(ch);
}
void task7() {
	char ch;
	cout << "Enter any char: ";
	ch = getchar();
	cout << "toLowerR: " << CustomFunctions::toLowerR(ch) << endl;
	cout << "toUpperR: " << CustomFunctions::toUpperR(ch) << endl;
	cout << "isAlphaR: " << (CustomFunctions::isAlphaR(ch) ? "True" : "False") << endl;
	cout << "isLowerR: " << (CustomFunctions::isLowerR(ch) ? "True" : "False") << endl;
	cout << "isUpperR: " << (CustomFunctions::isUpperR(ch) ? "True" : "False") << endl;
	cout << "isAlnumR: " << (CustomFunctions::isAlnumR(ch) ? "True" : "False") << endl;
}

int main()
{
    //task 1
    CustomFunctions::quadraticEquation(1, 12, 36);
    //---

    //task 2
    CustomFunctions::thirdEdgeOfTriangle(3, 4, 90);
    //---

    //task 3
	task3();
    //---

	//task 5
	task5();
	//---

	//task 6
	task6();
	//---

	//task 7
	task7();
	//---

	//task 8
	CustomFunctions::writeAddress();
	//---

	//task 9-10
	cout << "Perimeter 4 by 3 is: " << CustomFunctions::perimeter(4, 3) << endl;
	//---

	//task 11
	// change type of function return from void to int
	// void myFunc (int a) { return 4*a; } -- to -- int myFunc (int a) { return 4*a; }
	//---

	//task 12
	cout << "Divition 3/0 result: "; printf("%.2f", CustomFunctions::divideTwoNumbers(3, 0)); cout << endl;
	cout << "Divition 3/-2 result: "; printf("%.2f", CustomFunctions::divideTwoNumbers(3, -2)); cout << endl;
	//---

	//task 14
	cout << "Enter result: " << (CustomFunctions::yesOrNo() ? "True" : "False") << endl;
	//---

	//task 15
	cout << "Enter any symbol: ";
	char c;
	cin >> c;
	cout << "Char to int: " << CustomFunctions::charToInt(c) << endl;
	//---
	
	//task 16
	int i = 7;
	cout << "PlusOne to i(7): " << CustomFunctions::plusOne(i) << endl;
	//---

	//task 18
	cout << "Add two numbers (1 & 5 - default): " << CustomFunctions::addTwoNumbers(1) << endl;
	//---

	//task 19
	cout << "Compare int(3) to float(3.0f): " << (CustomFunctions::equal(3, 3.0f) ? "True" : "False") << endl;
	cout << "Compare float(4.5f) to double(4.501): " << (CustomFunctions::equal(4.5f, 4.501) ? "True" : "False") << endl;
	cout << "Compare long(256) to unsigned int(255): " << (CustomFunctions::equal(256, 255) ? "True" : "False") << endl;
	//---
}
