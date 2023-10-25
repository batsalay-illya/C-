#include "CustomFunctions.h"
#define _USE_MATH_DEFINES
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>
#include <ctype.h>
#include <iomanip>

using namespace std;

//task 1
void CustomFunctions::quadraticEquation(int a, int b, int c)
{
    double x1, x2;
    int D = b * b - 4 * a * c;
    if (D < 0)
    {
        cout << "No results..." << endl;
        return;
    }
    if (D == 0)
    {
        cout << "quadraticEquation with a:"<<a<<", b:"<<b<<", c:"<<c<<" ... " << "x = " << ((-b + sqrt(D)) / (2 * a)) << endl;
        return;
    }
    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);
    cout << "quadraticEquation with a:" << a << ", b:" << b << ", c:" << c << " ... " << "x1 = " << x1 << ", x2: " << x2 << endl;
}
//---

//task 2
void CustomFunctions::thirdEdgeOfTriangle(int a, int b, int angle)
{
    cout << "thirdEdgeOfTriangle (a="<<a<<", b="<<b<<") c = " << sqrt(pow(a, 2) + pow(b, 2) - (2 * a * b * cos(angle * (M_PI / 180)))) << endl;
}
//---

//task 3
void CustomFunctions::distanceBetweenPoints(int x1, int y1, int x2, int y2)
{
    double result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    //return result;
    cout << "distanceBetweenPoints: (" << x1 << ", " << y1 << ") & (" << x2 << ", " << y2 << ") = ";
    printf("%.2f", result); cout << endl;
}
//---

//task 5
int* CustomFunctions::setRandomValues(int _array[])
{
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        _array[i] = (rand() % 100);
    }
    return _array;
}
//

//task 6
void CustomFunctions::charToIntLongDouble(char* str) {
    cout << "Int: " << atoi(str) << endl;
    cout << "Long: " << atol(str) << endl;
    cout << "Double: " << atof(str) << endl;
}
//---

//task 7
char CustomFunctions::toLowerR(char ch) { return tolower(ch); }
char CustomFunctions::toUpperR(char ch) { return toupper(ch); }
bool CustomFunctions::isAlphaR(char ch) { return isalpha(ch); }
bool CustomFunctions::isLowerR(char ch) { return islower(ch); }
bool CustomFunctions::isUpperR(char ch) { return isupper(ch); }
bool CustomFunctions::isAlnumR(char ch) { return isalnum(ch); }
//---

//task 8
void CustomFunctions::writeAddress() {
	char city[20]{};
	char district[20]{};
	char street[20]{};
	char house[20]{};
	char apartment[20]{};
	char full_address[100]{};
	char concatenate_result[100]{};

	cout << "Enter city: ";			cin >> setw(20) >> city;			cin.ignore(numeric_limits<streamsize>().max(), '\n');
	cout << "Enter district: ";		cin >> setw(20) >> district;		cin.ignore(numeric_limits<streamsize>().max(), '\n');
	cout << "Enter street: ";		cin >> setw(20) >> street;			cin.ignore(numeric_limits<streamsize>().max(), '\n');
	cout << "Enter house: ";		cin >> setw(20) >> house;			cin.ignore(numeric_limits<streamsize>().max(), '\n');
	cout << "Enter apartment: ";	cin >> setw(20) >> apartment;		cin.ignore(numeric_limits<streamsize>().max(), '\n');
	cout << "Enter full address: ";	cin >> setw(100) >> full_address;	cin.ignore(numeric_limits<streamsize>().max(), '\n');

	strcat_s(concatenate_result, city);
	strcat_s(concatenate_result, ", ");
	strcat_s(concatenate_result, district);
	strcat_s(concatenate_result, ", ");
	strcat_s(concatenate_result, street);
	strcat_s(concatenate_result, ", ");
	strcat_s(concatenate_result, house);
	strcat_s(concatenate_result, ", ");
	strcat_s(concatenate_result, apartment);
	cout << "Concatenate: " << concatenate_result << endl;

	cout << "City length: " << strlen(city) << endl;
	cout << "District length: " << strlen(district) << endl;
	cout << "Street length: " << strlen(street) << endl;
	cout << "House length: " << strlen(house) << endl;
	cout << "Apartment length: " << strlen(apartment) << endl;
	cout << "Full address length: " << strlen(full_address) << endl;

	if (strlen(city) > strlen(district))
		cout << "Length of the citi > length of the district" << endl;
	else
		cout << "Length of the district > length of the city" << endl;
}
//---

//task 9 - 10
//unsigned long perimeter(int a, int b);
unsigned long CustomFunctions::perimeter(int a, int b) { return (a + b) * 2; }
//---

//task 12
double CustomFunctions::divideTwoNumbers(int a, int b) {
    if (b == 0) return -1;
    return (double)a / (double)b;
}
//---

//task 14
bool CustomFunctions::yesOrNo() {
	char userAnswer;
	while (true)
	{
		cout << "Enter: (y/n): ";
		cin >> userAnswer;
		userAnswer = tolower(userAnswer);
		if (userAnswer == 'y') return true; if (userAnswer == 'n') return false;

		cout << "You may only type 'y' or 'n'...\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}
//---

//task 15
//---

//task 16
int CustomFunctions::plusOne(int& i) { return i++; }
//

//task 18
int CustomFunctions::addTwoNumbers(int a, int b /*=5*/) { return a + b; }
//---

//task 19
bool CustomFunctions::equal(int a, float b) { return a == b; }
bool CustomFunctions::equal(float a, double b) { return a == b; }
bool CustomFunctions::equal(long a, unsigned int b) { return a == b; }
//---  

int CustomFunctions::inputInt()
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