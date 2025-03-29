//
// Created by bryce on 3/21/2025.
//

#include "lab8_3_selection_sort.h"
#include <iostream>
using namespace std;

void selectionSortArray(int [], int);
void displayArray(int[], int);
const int SIZE = 5;

int main() {
	int values[SIZE] = {9, 2, 0, 11, 5};

	cout << "The values before the selection sort are:" << endl;
	displayArray(values, SIZE);

	selectionSortArray(values, SIZE);

	cout << "The values after the selection sort are:" << endl;
	displayArray(values, SIZE);

	return 0;
}

void displayArray(int array[], int elems) {
	for (int count = 0; count < elems; count++)
		cout << array[count] << " ";
	cout << endl;
}

void selectionSortArray(int array[], int elems) {
	int seek, minCount, minValue;
	for (seek = 0; seek < elems - 1; seek++) {
		minCount = seek;
		minValue = array[seek];
		for (int index = seek + 1; index < elems; index++) {
			if (array[index] < minValue) {
				minValue = array[index];
				minCount = index;
			}
		}
		array[minCount] = array[seek];
		array[seek] = minValue;
	}
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab8_3_selection_sort.exe
The values before the selection sort are:
9 2 0 11 5
The values after the selection sort are:
0 2 5 9 11

Process finished with exit code 0
*/