//
// Created by bryce on 3/13/2025.
//

#include "lab7_2_student.h"
#include <iostream>
#include <iomanip>
using namespace std;

const int MAXGRADE = 25;
const int MAXCHAR = 30;
typedef char StringType30[MAXCHAR + 1];
typedef float GradeType[MAXGRADE];

float findGradeAvg(GradeType, int);
char findLetterGrade(float);

int main() {
    StringType30 firstname, lastname;
    int numOfGrades;
    GradeType grades;
    float average;
    char moreInput;

    cout << setprecision(2) << fixed << showpoint;
    cout << "Please input the number of grades each student will receive." << endl
         << "This must be a number between 1 and " << MAXGRADE << " inclusive" << endl;
    cin >> numOfGrades;
    while (numOfGrades > MAXGRADE || numOfGrades < 1) {
        cout << "Please input the number of grades for each student." << endl
             << "This must be a number between 1 and " << MAXGRADE << " inclusive" << endl;
        cin >> numOfGrades;
    }

    cout << "Please input a y if you want to input more students, any other character will stop the input" << endl;
    cin >> moreInput;
    while (moreInput == 'y' || moreInput == 'Y') {
        cout << "Please input the first name of the student" << endl;
        cin >> firstname;
        cout << "Please input the last name of the student" << endl;
        cin >> lastname;
        for (int count = 0; count < numOfGrades; count++) {
            cout << "Please input a grade" << endl;
            cin >> grades[count];
        }
        average = findGradeAvg(grades, numOfGrades);
        cout << firstname << " " << lastname << " has an average of " << average;
        cout << " which gives the letter grade of " << findLetterGrade(average) << endl << endl;
        cout << "Please input a y if you want to input more students, any other character will stop the input" << endl;
        cin >> moreInput;
    }

    return 0;
}

float findGradeAvg(GradeType array, int numGrades) {
    float sum = 0;
    for (int i = 0; i < numGrades; i++) {
        sum += array[i];
    }
    return sum / numGrades;
}

char findLetterGrade(float numGrade) {
    if (numGrade >= 90)
        return 'A';
    else if (numGrade >= 80)
        return 'B';
    else if (numGrade >= 70)
        return 'C';
    else if (numGrade >= 60)
        return 'D';
    else
        return 'F';
}

/*
*C:\Users\bryce\CLionProjects\CSCI1\lab7_2_student.exe
Please input the number of grades each student will receive.
This must be a number between 1 and 25 inclusive
1
Please input a y if you want to input more students, any other character will stop the input
y
Please input the first name of the student
John
Please input the last name of the student
Doe
Please input a grade
78
John Doe has an average of 78.00 which gives the letter grade of C

Please input a y if you want to input more students, any other character will stop the input
n

Process finished with exit code 0
*/