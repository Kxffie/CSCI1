//
// Created by bryce on 2/21/2025.
//

#include "gradepredictor.h"
#include <iostream>
using namespace std;

char calcGrade(const double examGrade, const double labGrade, const double classGrade, const double RQGrade) {
	const double totalGrade = examGrade * 0.5 + labGrade * 0.4 + classGrade * 0.05 + RQGrade * 0.05;
	switch (int total = static_cast<int>(totalGrade) / 10) {
		case 10:
		case 9:
			return 'A';
		case 8:
			return 'B';
		case 7:
			return 'C';
		case 6:
			return 'D';
		default:
			return 'F';
	}
}

int main() {
	double examGrade, labGrade, classGrade, RQGrade;
	// constexpr double examGrade = 90;
	// constexpr double labGrade = 80;
	// constexpr double classGrade = 70;
	// constexpr double RQGrade = 60;

	cout << "Enter your exam grade: ";
	cin >> examGrade;

	cout << "Enter your lab grade: ";
	cin >> labGrade;

	cout << "Enter your class grade: ";
	cin >> classGrade;

	cout << "Enter your RQ grade: ";
	cin >> RQGrade;

	cout << "Your grade is: " << calcGrade(examGrade, labGrade, classGrade, RQGrade) << endl;

	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\gradepredictor.exe
Enter your exam grade:100
Enter your lab grade:100
Enter your class grade:100
Enter your RQ grade:100
Your grade is: A

Process finished with exit code 0
*/
