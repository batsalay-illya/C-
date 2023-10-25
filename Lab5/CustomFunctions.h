#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>
#include <ctype.h>
#include <iomanip>
#pragma once
class CustomFunctions
{
public:
    static void quadraticEquation(int, int, int);
    static void thirdEdgeOfTriangle(int, int, int);
    static void distanceBetweenPoints(int, int, int, int);
    static int* setRandomValues(int[]);
    static void charToIntLongDouble(char*);
    
    static char toLowerR(char);
    static char toUpperR(char);
    static bool isAlphaR(char);
    static bool isLowerR(char);
    static bool isUpperR(char);
    static bool isAlnumR(char);
    
    static void writeAddress();
    
    static unsigned long perimeter(int, int);
    static double divideTwoNumbers(int, int);
    static bool yesOrNo();
    
    static inline int charToInt(char c) { return (int)c; };

    static int plusOne(int&);  
    static int addTwoNumbers(int a, int b = 5);

    static bool equal(int, float);
    static bool equal(float, double);
    static bool equal(long, unsigned int);

    static int inputInt();
};

