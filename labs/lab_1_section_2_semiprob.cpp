//
// Created by bryce on 1/15/2025.
//

#include "lab_1_section_2.h"
#include <iostream>
using namespace std;

/*
 *
 *	Today is a great day for lab
 *	let's start off by typing a number of your choice
 *	9
 *	18 is twice the number you entered
 *
 */

int main() {
	int number;
    float total;

    cout << "Today is a great day for lab";
    cout << endl << "lets start off by typing a number of your choice" << endl;
    cin >> number;

    total = number * 2;
    cout << total << " is twice the number you entered" << endl;

	return 0;
}
