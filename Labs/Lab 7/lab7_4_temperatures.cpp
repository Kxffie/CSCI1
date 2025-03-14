//
// Created by bryce on 3/13/2025.
//

#include "lab7_4_temperatures.h"
#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_TEMPS = 50;
typedef float TempType[MAX_TEMPS];

float findAverage(const TempType, int);
float findHighest(const TempType, int);
float findLowest(const TempType, int);

int main() {
	TempType temperatures;
	int count;

	cout << "Enter the number of temperatures (max " << MAX_TEMPS << "): ";
	cin >> count;
	if (count < 1 || count > MAX_TEMPS) {
		cout << "Invalid number of temperatures." << endl;
		return 1;
	}

	for (int i = 0; i < count; i++) {
		cout << "Enter temperature for day " << (i + 1) << ": ";
		cin >> temperatures[i];
	}

	float avg = findAverage(temperatures, count);
	float high = findHighest(temperatures, count);
	float low = findLowest(temperatures, count);

	cout << fixed << setprecision(2);
	cout << "Average temperature: " << avg << endl;
	cout << "Highest temperature: " << high << endl;
	cout << "Lowest temperature: " << low << endl;

	return 0;
}

float findAverage(const TempType temps, int count) {
	float sum = 0;
	for (int i = 0; i < count; i++) {
		sum += temps[i];
	}
	return sum / count;
}

float findHighest(const TempType temps, int count) {
	float highest = temps[0];
	for (int i = 1; i < count; i++) {
		if (temps[i] > highest)
			highest = temps[i];
	}
	return highest;
}

float findLowest(const TempType temps, int count) {
	float lowest = temps[0];
	for (int i = 1; i < count; i++) {
		if (temps[i] < lowest)
			lowest = temps[i];
	}
	return lowest;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab7_4_temperatures.exe
Enter the number of temperatures (max 50):3
Enter temperature for day 1:78
Enter temperature for day 2:45
Enter temperature f
or day 3:23
Average temperature: 48.67
Highest temperature: 78.00
Lowest temperature: 23.00

Process finished with exit code 0
*/