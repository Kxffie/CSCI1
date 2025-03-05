//
// Created by bryce on 3/4/2025.
//

#include "driverslicenseexam.h"
#include <iostream>
#include <cctype>
using namespace std;

int main() {
	const int SIZE = 5;
	char correctAnswers[SIZE] = {'A', 'D', 'B', 'B', 'C'};
	char studentAnswers[SIZE];
	int correctCount = 0;
	int incorrectCount = 0;

	for (int i = 0; i < SIZE; i++) {
		cout << "Enter answer for question " << i + 1 << ": ";
		cin >> studentAnswers[i];
		studentAnswers[i] = toupper(studentAnswers[i]);
	}

	cout << "\nExam Results:\n";
	for (int i = 0; i < SIZE; i++) {
		if (studentAnswers[i] == correctAnswers[i]) {
			correctCount++;
		} else {
			incorrectCount++;
			cout << "Question " << i + 1 << " was wrong." << endl;
		}
	}

	cout << "\nTotal correct answers: " << correctCount << endl;
	cout << "Total incorrect answers: " << incorrectCount << endl;
	if (correctCount >= 4) {
		cout << "You passed the exam." << endl;
	} else {
		cout << "You failed the exam." << endl;
	}

	return 0;
}
