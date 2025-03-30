//
// Created by bryce on 3/13/2025.
//

#include "lab7_1_testscore.h"
#include <iostream>
using namespace std;

typedef int GradeType[100];

float findAverage(const GradeType, int);
int findHighest(const GradeType, int);
int findLowest(const GradeType, int);

int main() {
	GradeType grades;
	int numberOfGrades = 0;
	int pos = 0;
	float avgOfGrades;
	int highestGrade;
	int lowestGrade;

	cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl;
	cin >> grades[pos];
	while (grades[pos] != -99 && pos < 100) {
		pos++;
		cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl;
		cin >> grades[pos];
	}
	numberOfGrades = pos;
	if (numberOfGrades == 0) {
		cout << "No valid grades entered." << endl;
		return 0;
	}
	avgOfGrades = findAverage(grades, numberOfGrades);
	highestGrade = findHighest(grades, numberOfGrades);
	lowestGrade = findLowest(grades, numberOfGrades);

	cout << endl << "The average of all the grades is " << avgOfGrades << endl;
	cout << "The highest grade is " << highestGrade << endl;
	cout << "The lowest grade is " << lowestGrade << endl;

	return 0;
}

float findAverage(const GradeType array, int size) {
	float sum = 0;
	for (int pos = 0; pos < size; pos++) {
		sum += array[pos];
	}
	return sum / size;
}

int findHighest(const GradeType array, int size) {
	int high = array[0];
	for (int pos = 1; pos < size; pos++) {
		if (array[pos] > high)
			high = array[pos];
	}
	return high;
}

int findLowest(const GradeType array, int size) {
	int low = array[0];
	for (int pos = 1; pos < size; pos++) {
		if (array[pos] < low)
			low = array[pos];
	}
	return low;
}


/*
*C:\Users\bryce\CLionProjects\CSCI1\lab7_1_testscore.exe
Please input a grade from 1 to 100, (or -99 to stop)
74
Please input a grade from 1 to 100, (or -99 to stop)
85
Please input a grade from 1 to 100, (or -99 to stop)
74
Please input a grade from 1 to 100, (or -99 to stop)
23
Please input a grade from 1 to 100, (or -99 to stop)
65
Please input a grade from 1 to 100, (or -99 to stop)
76
Please input a grade from 1 to 100, (or -99 to stop)
34
Please input a grade from 1 to 100, (or -99 to stop)
78
Please input a grade from 1 to 100, (or -99 to stop)
76
Please input a grade from 1 to 100, (or -99 to stop)
88
Please input a grade from 1 to 100, (or -99 to stop)
88
Please input a grade from 1 to 100, (or -99 to stop)
88-
Please input a grade from 1 to 100, (or -99 to stop)
88
Please input a grade from 1 to 100, (or -99 to stop)
88
Please input a grade from 1 to 100, (or -99 to stop)
99
Please input a grade from 1 to 100, (or -99 to stop)
-99

The average of all the grades is 74.9333
The highest grade is 99
The lowest grade is 23

Process finished with exit code 0
*/