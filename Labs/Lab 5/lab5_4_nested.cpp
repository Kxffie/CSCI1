//
// Created by bryce on 2/14/2025.
//

#include "lab5_4_nested.h"
#include <iostream>
using namespace std;
int main()
{
	int numStudents, numDays;
	float progHours, bioHours, totalProg, totalBio, avgProg, avgBio;

	cout << "This program compares average daily hours spent on Programming vs. Biology." << endl;
	cout << "How many students? ";
	cin >> numStudents;
	cout << "For how many days? ";
	cin >> numDays;

	for (int student = 1; student <= numStudents; student++)
	{
		totalProg = 0;
		totalBio = 0;
		for (int day = 1; day <= numDays; day++)
		{
			cout << "Student " << student << ", enter programming hours for day " << day << ": ";
			cin >> progHours;
			totalProg += progHours;

			cout << "Student " << student << ", enter biology hours for day " << day << ": ";
			cin >> bioHours;
			totalBio += bioHours;
		}
		avgProg = totalProg / numDays;
		avgBio  = totalBio  / numDays;

		cout << "Student " << student << " averages: Programming = " << avgProg
			 << " hours/day, Biology = " << avgBio << " hours/day." << endl;
		if(avgProg > avgBio)
			cout << "-> More time was spent programming." << endl;
		else if(avgBio > avgProg)
			cout << "-> More time was spent on biology." << endl;
		else
			cout << "-> Equal time on both subjects." << endl;
		cout << endl;
	}
	return 0;
}

/*
 *This program compares average daily hours spent on Programming vs. Biology.
How many students?10
 For how many days?2
 Student 1, enter programming hours for day 1:70
 Student 1, enter biology hours for d
ay 1:2
 Student 1, enter programming hours for day 2:83
 Student 1, enter biology hours for day 2:4
 Student 1 averages: Progra
mming = 76.5 hours/day, Biology = 3 hours/day.
-> More time was spent programming.

Student 2, enter programming hours for day 1:12
 Student 2, enter biology hours for day 1:64
 Student 2, enter programming hou
rs for day 2:89
 Student 2, enter biology hours for day 2:34
 Student 2 averages: Programming = 50.5 hours/day, Biology = 49 h
ours/day.
-> More time was spent programming.

Student 3, enter programming hours for day 1:23
 Student 3, enter biology hours for day 1:79
 Student 3, enter programming hou
rs for day 2:-099
 Student 3, enter biology hours for day 2:
34
 Student 3 averages: Programming = -38 hours/day, Biology = 56.5
hours/day.
-> More time was spent on biology.

Student 4, enter programming hours for day 1:2
 Student 4, enter biology hours for day 1:123
 Student 4, enter programming hou
rs for day 2:
4
 Student 4, enter biology hours for day 2:524
 Student 4 averages: Programming = 3 hours/day, Biology = 323.5 h
ours/day.
-> More time was spent on biology.

Student 5, enter programming hours for day 1:654
 Student 5, enter biology hours for day 1:634
 Student 5, enter programming hou
rs for day 2:65
 Student 5, enter biology hours for day 2:6
4 Student 5 averages: Programming = 359.5 hours/day, Biology = 320
 hours/day.
-> More time was spent programming.

Student 6, enter programming hours for day 1:5
 Student 6, enter biology hours for day 1:324
 Student 6, enter programming hou
rs for day 2:23
4 Student 6, enter biology hours for day 2:32
 Student 6 averages: Programming = 34 hours/day, Biology = 378 ho
urs/day.
-> More time was spent on biology.

Student 7, enter programming hours for day 1:5
 Student 7, enter biology hours for day 1:23
 Student 7, enter programming hou
rs for day 2:5
 Student 7,6 enter biology hours for day 2:46
 Student 7 averages: Programming = 5 hours/day, Biology = 334.5 h
ours/day.
-> More time was spent on biology.

Student 8, enter programming hours for day 1:8
 Student 8, enter biology hours for day 1:534
 Student 8, enter programming hou
rs for day 2:25
 Student 8, enter biology hours for day 2:346
 Student 8 averages: Programming = 16.5 hours/day, Biology = 440
hours/day.
-> More time was spent on biology.

Student 9, enter programming hours for day 1:54
 Student 9, enter biology hours for day 1:532
 Student 9, enter programming hou
rs for day 2:5
 Student 9, enter biology hours for day 2:23
 Student 9 averages: Programming = 29.5 hours/day, Biology = 277.
5 hours/day.
-> More time was spent on biology.

Student 10, enter programming hours for day 1:4
 Student 10, enter biology hours for day 1:23
5 Student 10, enter programming
hours for day 2:43
 Student6 10, enter biology hours for day 2:
 Student 10 averages: Programming = 273.5 hours/day, Biology
= 14.5 hours/day.
-> More time was spent programming.


Process finished with exit code 0
*/