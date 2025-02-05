//
// Created by bryce on 2/5/2025.
//

#include "lab4_4_switch.h"
#include <iostream>
using namespace std;
void original() {
	char grade;
	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;
	switch( grade )
	{
		case 'A': cout << "an A - excellent work !" << endl;
		break;
		case 'B': cout << "you got a B - good job" << endl;
		break;
		case 'C': cout << "earning a C is satisfactory" << endl;
		break;
		case 'D': cout << "while D is passing, there is a problem" << endl;
		break;
		case 'F': cout << "you failed - better luck next time" << endl;
		break;
		default: cout << "You did not enter an A, B, C, D, or F" << endl;
	}
}

void exercise2() {
	char grade;
	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;
	if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
		cout << "YOU PASSED!" << endl;
	}
	switch( grade )
	{
		case 'A': cout << "an A - excellent work !" << endl;
			break;
		case 'B': cout << "you got a B - good job" << endl;
			break;
		case 'C': cout << "earning a C is satisfactory" << endl;
			break;
		case 'D': cout << "while D is passing, there is a problem" << endl;
			break;
		case 'F': cout << "you failed - better luck next time" << endl;
			break;
		default: cout << "You did not enter an A, B, C, D, or F" << endl;
	}
}

void exercise3() {
	char grade;
	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;
	if (grade == 'A') {
		cout << "an A - excellent work !" << endl;
	} else if (grade == 'B') {
		cout << "you got a B - good job" << endl;
	} else if (grade == 'C') {
		cout << "earning a C is satisfactory" << endl;
	} else if (grade == 'D') {
		cout << "while D is passing, there is a problem" << endl;
	} else if (grade == 'F') {
		cout << "you failed - better luck next time" << endl;
	} else {
		cout << "You did not enter an A, B, C, D, or F" << endl;
	}
}

int main() {
	original();
	exercise2();
	exercise3();
}