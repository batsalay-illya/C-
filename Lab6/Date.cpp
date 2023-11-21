#include "Date.h"
#include <iostream>

Date::Date() {
    day = 0;
    month = 0;
    year = 0;
}
Date::Date(int day) {
    this->day = day;
    month = 0;
    year = 0;
}
Date::Date(int day, int month) {
    this->day = day;
    this->month = month;
    year = 0;
}
Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

Date::~Date() {
    cout << "Date " << day << "." << month << "." << year << "- has deleted" << endl;
}

void Date::setDay(int day)
{
    if (day > 28 && month == 0)
    {
        cout << "Error! You need to set the month if you want to set day>28";
        return;
    }

    if (day <= 0)
        day = 1;

    if (month == 2 && day > 28)
    {
        day = 28;

        if (isLeapYear())
            day = 29;
    }

    if (day > 30)
    {
        switch (month)
        {
        case 4:
        case 6:
        case 9:
        case 11:
            day = 30;
            break;
        }
    }

    if (day > 31)
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day = 31;
            break;
        }
    }

    this->day = day;
}
void Date::setMonth(int month)
{
    if (month <= 0)
        month = 1;

    if (month > 12)
        month = 12;

    this->month = month;
}
void Date::setYear(int year)
{
    if (year <= 0)
        year = 1;

    this->year = year;
}

bool Date::isLeapYear()
{
    if (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0))
        return true;

    return false;
}

int Date::getDay() { return day; }
int Date::getMonth() { return month; }
int Date::getYear() { return year; }


void Date::printDateTypeDot() { cout << day << "." << month << "." << year << endl; }
void Date::printDateTypeSlash() { cout << day << "/" << month << "/" << year << endl; }
void Date::printDateTypeUS() { cout << month << "-" << day << "-" << year << endl; }