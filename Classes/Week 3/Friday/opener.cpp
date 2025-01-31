//
// Created by bryce on 1/31/2025.
//

#include "opener.h"
#include <iostream>

using namespace std;

/*
Write a C++ program that asks the user to rate the softness of their bed from 1 (hardest) to 10 (softest).
If the user enters a 3 or lower, the program should respond by printing the message, "That is too hard!"
If the user enters a 8 or higher, the program should respond by printing the message, "That is too soft!"
If the user enters a number between 3 and 8, the program should respond by printing the message, "That is just right!"
In all cases, the program should finish by printing the message, "Pleasant dreams!"
*/

int main() {
    int bedSoftness;

	cout << "Rate the softness of your bed from 1 (hardest) to 10 (softest): ";
	cin >> bedSoftness;

	if (bedSoftness <= 3) {
		cout << "That is too hard!" << endl;
	} else if (bedSoftness >= 8) {
		cout << "That is too soft!" << endl;
	} else {
		cout << "That is just right!" << endl;
	}

	cout << "Pleasant dreams!" << endl;

	return 0;
  }