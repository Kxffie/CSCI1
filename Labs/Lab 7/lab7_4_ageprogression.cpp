//
// Created by bryce on 3/13/2025.
//

#include "lab7_4_ageprogression.h"
#include <iostream>
using namespace std;

const int TOTALYEARS = 100;
typedef int AgeFrequencyType[TOTALYEARS];

int main() {
	AgeFrequencyType ageFrequency;
	for (int i = 0; i < TOTALYEARS; i++) {
		ageFrequency[i] = 0;
	}

	int age;
	cout << "Enter ages between 1 and 100 (or -99 to stop):" << endl;
	cin >> age;
	while (age != -99) {
		if (age >= 1 && age <= 100)
			ageFrequency[age - 1]++;
		else
			cout << "Invalid age entered." << endl;
		cin >> age;
	}

	for (int i = 0; i < TOTALYEARS; i++) {
		if (ageFrequency[i] > 0)
			cout << "The number of people " << i + 1 << " years old is " << ageFrequency[i] << endl;
	}

	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab7_4_ageprogression.exe
Enter ages between 1 and 100 (or -99 to stop):
23
24
12
98
45
-99
The number of people 12 years old is 1
The number of people 23 years old is 1
The number of people 24 years old is 1
The number of people 45 years old is 1
The number of people 98 years old is 1

Process finished with exit code 0
*/