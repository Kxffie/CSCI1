//
// Created by bryce on 2/21/2025.
//

#include "gradepredictor.h"
#include <iostream>
using namespace std;

char calcGrade(const double examGrade, const double labGrade, const double classGrade, const double RQGrade) {
	if (const double totalGrade = examGrade * 0.5 + labGrade * 0.4 + classGrade * 0.05 + RQGrade * 0.05; totalGrade >= 90)
		return 'A';
	else if (totalGrade >= 80)
		return 'B';
	else if (totalGrade >= 70)
		return 'C';
	else if (totalGrade >= 60)
		return 'D';
	else
		return 'F';
}

int main() {
	// constexpr double examGrade = 90;
	// constexpr double labGrade = 80;
	// constexpr double classGrade = 70;
	// constexpr double RQGrade = 60;
	double examGrade, labGrade, classGrade, RQGrade;
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
