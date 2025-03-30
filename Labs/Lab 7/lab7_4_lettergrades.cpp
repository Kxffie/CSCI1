//
// Created by bryce on 3/13/2025.
//

#include "lab7_4_lettergrades.h"
#include <iostream>
using namespace std;

const int MAX_GRADES = 50;
typedef char GradeArrayType[MAX_GRADES];

int countGrade(const GradeArrayType, int, char);

int main() {
	GradeArrayType grades;
	int count;

	cout << "Enter the number of letter grades (max " << MAX_GRADES << "): ";
	cin >> count;
	if (count < 1 || count > MAX_GRADES) {
		cout << "Invalid number of grades." << endl;
		return 1;
	}

	cout << "Enter " << count << " letter grades (A, B, C, D, F):" << endl;
	for (int i = 0; i < count; i++) {
		cin >> grades[i];
	}

	int countA = countGrade(grades, count, 'A');
	int countB = countGrade(grades, count, 'B');
	int countC = countGrade(grades, count, 'C');
	int countD = countGrade(grades, count, 'D');
	int countF = countGrade(grades, count, 'F');

	cout << "Number of A's: " << countA << endl;
	cout << "Number of B's: " << countB << endl;
	cout << "Number of C's: " << countC << endl;
	cout << "Number of D's: " << countD << endl;
	cout << "Number of F's: " << countF << endl;

	return 0;
}

int countGrade(const GradeArrayType grades, int count, char gradeToCount) {
	int counter = 0;
	for (int i = 0; i < count; i++) {
		if (grades[i] == gradeToCount)
			counter++;
	}
	return counter;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab7_4_lettergrades.exe
Enter the number of letter grades (max 50):5
Enter 5 letter grades (A, B, C, D, F):
A
B
D
D
F
Number of A's: 1
Number of B's: 1
Number of C's: 0
Number of D's: 2
Number of F's: 1

Process finished with exit code 0
*/