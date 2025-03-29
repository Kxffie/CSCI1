//
// Created by bryce on 3/21/2025.
//

#include "problem_8_mode_function.h"
#include <iostream>
using namespace std;

int findMode(int *arr, int size) {
	int mode = -1;
	int maxCount = 1;
	for (int i = 0; i < size; i++) {
		int count = 0;
		for (int j = 0; j < size; j++) {
			if (*(arr + j) == *(arr + i)) {
				count++;
			}
		}
		if (count > maxCount) {
			maxCount = count;
			mode = *(arr + i);
		}
	}
	return (maxCount == 1) ? -1 : mode;
}

int main() {
	int numbers[] = {1, 2, 3, 2, 5, 2, 6};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	int mode = findMode(numbers, size);
	if (mode != -1) {
		cout << "The mode is: " << mode << endl;
	} else {
		cout << "No mode found." << endl;
	}
	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\problem_8_mode_function.exe
The mode is: 2

Process finished with exit code 0
*/