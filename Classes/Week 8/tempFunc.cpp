//
// Created by bryce on 2/26/2025.
//

#include "tempFunc.h"
#include <iostream>
using namespace std;

double fahrenheitToCelsius(double fahrenheit) {
	return (fahrenheit - 32) * 5 / 9;
}

int main() {
	double fahrenheit;
	cout << "Enter a temperature in Fahrenheit: ";
	cin >> fahrenheit;
	cout << "The temperature in Celsius is: " << fahrenheitToCelsius(fahrenheit) << endl;
	return 0;
}

/*
Enter a temperature in Fahrenheit:212
The temperature in Celsius is: 100

Process finished with exit code 0
*/