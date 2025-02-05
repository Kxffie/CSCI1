//
// Created by bryce on 2/5/2025.
//

/*
Input your average:
100
You Pass

Input your average:
50
You Fail

Input your average:
60
You Pass
*/

#include "lab4_2_grades.h"
#include <iostream>
using namespace std;
void original(){
	float average;
	cout << "Input your average:" << endl;
	cin >> average;
	if (average > 60)
		cout << "You Pass" << endl;
	if (average < 60)
		cout << "You Fail" << endl;
}

void exercise2() {
  	float average;
	cout << "Input your average:" << endl;
	cin >> average;
	if (average >= 60)
		cout << "You Pass" << endl;
	else
		cout << "You Fail" << endl;
}

void exercise3() {
  	float average;
	cout << "Input your average:" << endl;
	cin >> average;
	if (average < 0 || average > 100) {
		cout << "Invalid data" << endl;
	} else {
		switch (static_cast<int>(average) / 10) {
			case 10:
			case 9: cout << "A" << endl;
				break;
			case 8: cout << "B" << endl;
				break;
			case 7:
				break;
			case 6: cout << "You Pass" << endl;
				break;
			default:
				cout << "You Fail" << endl;
		}
	}
}

int main() {
	original();
	exercise2();
	exercise3();
	return 0;
}