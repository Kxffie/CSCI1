//
// Created by bryce on 3/5/2025.
//

#include "lab6_4_speed.h"
#include <iostream>
#include <iomanip>
using namespace std;

void calculateSpeed(float miles, float hours, float &milesPerHour);

int main() {
	float miles, hours, speed;
	cout << "Enter miles traveled: ";
	cin >> miles;
	cout << "Enter hours traveled: ";
	cin >> hours;
	calculateSpeed(miles, hours, speed);
	cout << fixed << setprecision(2);
	cout << "Miles per hour: " << speed << endl;
	return 0;
}

void calculateSpeed(float miles, float hours, float &milesPerHour) {
	if (hours != 0)
		milesPerHour = miles / hours;
	else
		milesPerHour = 0;
}

/*
Enter miles traveled:100
Enter hours traveled:200
Miles per hour: 0.50
*/