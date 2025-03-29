//
// Created by bryce on 3/21/2025.
//

#include "opener.h"
#include <iostream>
#include <string>

using namespace std;

void printColorAtIndex(const string rainbow[], int index) {
	if (index >= 0 && index < 7) {
		cout << "Color at index " << index << ": " << rainbow[index] << endl;
	} else {
		cout << "Index out of range." << endl;
	}
}

void printAllColors(const string rainbow[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << rainbow[i] << endl;
	}
}

int main() {
	const string rainbow[7] = {"Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet"};

	int index;
	cout << "Enter an index (0-6): ";
	cin >> index;
	printColorAtIndex(rainbow, index);

	cout << "\nAll colors:" << endl;
	printAllColors(rainbow, 7);

	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\opener.exe
Enter an index (0-6):2
Color at index 2: Yellow

All colors:
Red
Orange
Yellow
Green
Blue
Indigo
Violet

Process finished with exit code 0

C:\Users\bryce\CLionProjects\CSCI1\opener.exe
Enter an index (0-6):5
Color at index 5: Indigo

All colors:
Red
Orange
Yellow
Green
Blue
Indigo
Violet

Process finished with exit code 0
*/