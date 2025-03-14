//
// Created by bryce on 2/5/2025.
//

/*
What year student are you ?
Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)

4
Now enter your GPA
3.5
It is time to graduate soon

What year student are you ?
Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)

1
Now enter your GPA
1
You need more schooling

What year student are you ?
Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)

1
Now enter your GPA
5
It is time to graduate soon

What year student are you ?
Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)

2
Now enter your GPA
1
You need more schooling

What year student are you ?
Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)

1
Now enter your GPA
6
It is time to graduate soon
 */

#include "lab4_3_logicalop.h"
#include <iostream>
using namespace std;

void original() {
	char year;
	float gpa;

	cout << "What year student are you ?" << endl;
	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
	<< endl << endl;

	cin >> year;
	cout << "Now enter your GPA" << endl;
	cin >> gpa;
	if (gpa >= 2.0 && year == '4')
		cout << "It is time to graduate soon" << endl;
	else if (year != '4'|| gpa <2.0)
		cout << "You need more schooling" << endl;
}

void exercise1() {
	char year;
	float gpa;

	cout << "What year student are you ?" << endl;
	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
	<< endl << endl;

	cin >> year;
	cout << "Now enter your GPA" << endl;
	cin >> gpa;
	if (!(gpa < 2.0) && year == '4')
		cout << "It is time to graduate soon" << endl;
	else if (year != '4'|| gpa <2.0)
		cout << "You need more schooling" << endl;
}

void exercise2() {
	char year;
	float gpa;

	cout << "What year student are you ?" << endl;
	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
	<< endl << endl;

	cin >> year;
	cout << "Now enter your GPA" << endl;
	cin >> gpa;
	if (gpa >= 2.0 && year < '4')
		cout << "It is time to graduate soon" << endl;
	else if (year != '4'|| gpa <2.0)
		cout << "You need more schooling" << endl;
}

void exercise3() {
	char year;
	float gpa;

	cout << "What year student are you ?" << endl;
	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
	<< endl << endl;

	cin >> year;
	cout << "Now enter your GPA" << endl;
	cin >> gpa;
	if (gpa >= 2.0 || year == '4')
		cout << "It is time to graduate soon" << endl;
	else if (year != '4' && gpa <2.0)
		cout << "You need more schooling" << endl;
}

void exercise4() {
	char year;
	float gpa;

	cout << "What year student are you ?" << endl;
	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
	<< endl << endl;

	cin >> year;
	cout << "Now enter your GPA" << endl;
	cin >> gpa;
	if (gpa >= 2.0 || year == '4')
		cout << "It is time to graduate soon" << endl;
	else
		cout << "You need more schooling" << endl;
}

int main() {
	original();
	exercise1();
	exercise2();
	exercise3();
	exercise4();
}