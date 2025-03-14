//
// Created by bryce on 3/5/2025.
//

#include "lab6_4_average.h"
#include <iostream>
using namespace std;

void computeAverage(const int numGrades, const float sum, float &average);

int main() {
	int count;
	cout << "Enter number of grades: ";
	cin >> count;

	float sum = 0, grade;
	for (int i = 0; i < count; i++) {
		cout << "Enter grade " << (i + 1) << ": ";
		cin >> grade;
		sum += grade;
	}

	float average;
	computeAverage(count, sum, average);

	cout << "Average grade: " << average << endl;

	char letter;
	if (average >= 90)
		letter = 'A';
	else if (average >= 80)
		letter = 'B';
	else if (average >= 70)
		letter = 'C';
	else if (average >= 60)
		letter = 'D';
	else
		letter = 'F';

	cout << "Letter grade: " << letter << endl;
	return 0;
}

void computeAverage(const int numGrades, const float sum, float &average) {
	if (numGrades != 0)
		average = sum / numGrades;
	else
		average = 0;
}

/*
Enter number of grades:7
Enter grade 1:1
Enter grade 2:6
Enter grade 3:2
Enter grade 4:100
Enter grade 5:42
Enter grade 6:2
Enter
grade 7:6
Average grade: 22.7143
Letter grade: F
*/