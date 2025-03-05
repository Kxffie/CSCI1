//
// Created by bryce on 3/5/2025.
//

#include "lab6_4_swap.h"
#include <iostream>
using namespace std;

void swapValues(float &number1, float &number2);

int main() {
	float first, second;
	cout << "Enter first number: ";
	cin >> first;
	cout << "Enter second number: ";
	cin >> second;
	cout << "Before swapping: first = " << first << ", second = " << second << endl;
	swapValues(first, second);
	cout << "After swapping: first = " << first << ", second = " << second << endl;
	return 0;
}

void swapValues(float &number1, float &number2) {
	float temp = number1;
	number1 = number2;
	number2 = temp;
}

/*
Enter first number:100
Enter second number:200
Before swapping: first = 100, second = 200
After swapping: first = 200, second = 100
*/