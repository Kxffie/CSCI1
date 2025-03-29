//
// Created by bryce on 3/21/2025.
//

#include "lab8_3_bubble_sort.h"
#include <iostream>
using namespace std;

void bubbleSortArray(int [], int);
void displayArray(int[], int);
const int SIZE = 5;

int main() {
	int values[SIZE] = {9, 2, 0, 11, 5};

	cout << "The values before the bubble sort are:" << endl;
	displayArray(values, SIZE);

	bubbleSortArray(values, SIZE);

	cout << "The values after the bubble sort are:" << endl;
	displayArray(values, SIZE);

	return 0;
}

void displayArray(int array[], int elems) {
	for (int count = 0; count < elems; count++)
		cout << array[count] << " ";
	cout << endl;
}

void bubbleSortArray(int array[], int elems) {
	bool swapOccurred;
	int temp;
	int bottom = elems - 1;

	do {
		swapOccurred = false;
		for (int count = 0; count < bottom; count++) {
			if (array[count] > array[count + 1]) {
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swapOccurred = true;
			}
		}
		bottom--;
	} while (swapOccurred);
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab8_3_bubble_sort.exe
The values before the bubble sort are:
9 2 0 11 5
The values after the bubble sort are:
0 2 5 9 11

Process finished with exit code 0
*/