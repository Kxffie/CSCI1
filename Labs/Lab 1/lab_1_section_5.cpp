//
// Created by bryce on 1/15/2025.
//

#include "lab_1_section_5.h"
#include <iostream>
using namespace std;

int main() {
	double kilometers;
	const double KM_TO_MILES = 0.621;

	cout << "Enter the number of kilometers traveled: ";
	cin >> kilometers;

	double miles = kilometers * KM_TO_MILES;

	cout << kilometers << " kilometers is equal to " << miles << " miles." << std::endl;

	return 0;
}