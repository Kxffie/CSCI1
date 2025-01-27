//
// Created by bryce on 1/27/2025.
//

#include "opener.h"
#include <iostream>
#include <cmath>
using namespace std;

/*
Write a program in C++ that prompts the user for the radius of a sphere and then displays the volume of the sphere defined by that number.
Use const double PI = 3.14159 in your calculations.
The formula for a the volume of a sphere is 4/3 * PI * radius^3.  Remember there is no ^ in C++, you will have to multiply it out or use the pow() function.
 */

int main() {
    double radius;
	constexpr double PI = 3.14159;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    const double volume = (4.0 / 3.0) * PI * pow(radius, 3);

    cout << "The volume of the sphere is: " << volume << endl;

    return 0;
}