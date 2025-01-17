//
// Created by bryce on 1/15/2025.
//

#include "lab_1_section_3.h"
#include <iostream>
using namespace std;

/* when divider is 0
Hi there
Please input a number and then hit return
20
Half of your number is inf
*/

/* when divider is 2
Hi there
Please input a number and then hit return
10
Half of your number is inf
*/

int main () {
  	float number;
    int divider;

    divider = 2;

    cout << "Hi there" << endl;
    cout << "Please input a number and then hit return" << endl;
    cin >> number;

    number = number / divider;

    cout << "Half of your number is " << number << endl;

    return 0;
}