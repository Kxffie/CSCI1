//
// Created by bryce on 3/4/2025.
//

#include "lab6_8_distanceConverter.h"
#include <iostream>
#include <iomanip>
using namespace std;

float milesToKilometers(float miles) {
	return miles * 1.61;
}

float kilometersToMiles(float km) {
	return km * 0.621;
}

int main() {
	int choice;
	float distance, converted;
	cout << fixed << showpoint << setprecision(2);
	cout << "Distance Converter" << endl;
	cout << "Enter 1 to convert miles to kilometers." << endl;
	cout << "Enter 2 to convert kilometers to miles." << endl;
	cout << "Choice: ";
	cin >> choice;

	cout << "Enter the distance: ";
	cin >> distance;

	if (choice == 1) {
		converted = milesToKilometers(distance);
		cout << distance << " miles is " << converted << " kilometers." << endl;
	} else if (choice == 2) {
		converted = kilometersToMiles(distance);
		cout << distance << " kilometers is " << converted << " miles." << endl;
	} else {
		cout << "Invalid choice." << endl;
	}

	return 0;
}

/*
*Distance Converter
Enter 1 to convert miles to kilometers.
Enter 2 to convert kilometers to miles.
Choice:1
Enter the distance:100
100.00 miles is 161.00 kilometers.

Distance Converter
Enter 1 to convert miles to kilometers.
Enter 2 to convert kilometers to miles.
Choice:2
 Enter the distance:1000
 1000.00 kilometers is 621.00 miles.

*/