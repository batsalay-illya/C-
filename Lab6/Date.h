#include <iostream>
#pragma once
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int);
    Date(int, int);
    Date(int, int, int);

    ~Date();

    void setDay(int day);
    void setMonth(int);
    void setYear(int);

    bool isLeapYear();

    int getDay();
    int getMonth();
    int getYear();


    void printDateTypeDot();
    void printDateTypeSlash();
    void printDateTypeUS();
};

