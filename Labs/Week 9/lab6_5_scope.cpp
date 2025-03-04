//
// Created by bryce on 3/4/2025.
//

#include "lab6_5_scope.h"
#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14;
const double RATE = 0.25;
void findArea(float, float&);
void findCircumference(float, float&);

int main()
{
    cout << fixed << showpoint << setprecision(2);
    float radius = 12;
    cout << "Main function outer block" << endl;
    cout << "Active identifiers: PI, RATE, findArea, findCircumference, main, radius" << endl << endl;

    {
        float area;
        cout << "Main function first inner block" << endl;
        cout << "Active identifiers: PI, RATE, findArea, findCircumference, main, radius, area" << endl << endl;

        findArea(radius, area);
        cout << "The radius = " << radius << endl;
        cout << "The area = " << area << endl << endl;
    }

    {
        float radius = 10;
        float circumference;
        cout << "Main function second inner block" << endl;
        cout << "Active identifiers: PI, RATE, findArea, findCircumference, main, radius, circumference" << endl << endl;

        findCircumference(radius, circumference);
        cout << "The radius = " << radius << endl;
        cout << "The circumference = " << circumference << endl << endl;
    }

    cout << "Main function after all calls" << endl;
    cout << "Active identifiers: PI, RATE, findArea, findCircumference, main, radius" << endl << endl;
    return 0;
}

void findArea(float rad, float& answer)
{
    cout << "AREA FUNCTION" << endl << endl;
    cout << "Active identifiers: PI, RATE, findArea, findCircumference, rad, answer" << endl << endl;
    answer = PI * rad * rad;
}

void findCircumference(float length, float& distance)
{
    cout << "CIRCUMFERENCE FUNCTION" << endl << endl;
    cout << "Active identifiers: PI, RATE, findArea, findCircumference, length, distance" << endl << endl;
    distance = 2 * PI * length;
}

/*
*Main function outer block
Active identifiers: PI, RATE, findArea, findCircumference, main, radius

Main function first inner block
Active identifiers: PI, RATE, findArea, findCircumference, main, radius, area

AREA FUNCTION

Active identifiers: PI, RATE, findArea, findCircumference, rad, answer

The radius = 12.00
The area = 452.16

Main function second inner block
Active identifiers: PI, RATE, findArea, findCircumference, main, radius, circumference

CIRCUMFERENCE FUNCTION

Active identifiers: PI, RATE, findArea, findCircumference, length, distance

The radius = 10.00
The circumference = 62.80

Main function after all calls
Active identifiers: PI, RATE, findArea, findCircumference, main, radius
*/