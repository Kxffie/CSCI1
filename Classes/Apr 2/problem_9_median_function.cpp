//
// Created by bryce on 3/21/2025.
//

#include "problem_9_median_function.h"
#include <iostream>
using namespace std;

double findMedian(int *arr, int size) {
	if (size % 2 != 0) {
		return *(arr + size / 2);
	} else {
		int mid1 = *(arr + size / 2 - 1);
		int mid2 = *(arr + size / 2);
		return (mid1 + mid2) / 2.0;
	}
}

int main() {
	int sortedOdd[] = {1, 3, 5, 7, 9};
	int sizeOdd = sizeof(sortedOdd) / sizeof(sortedOdd[0]);
	double medianOdd = findMedian(sortedOdd, sizeOdd);
	cout << "Median of odd array: " << medianOdd << endl;

	int sortedEven[] = {2, 4, 6, 8};
	int sizeEven = sizeof(sortedEven) / sizeof(sortedEven[0]);
	double medianEven = findMedian(sortedEven, sizeEven);
	cout << "Median of even array: " << medianEven << endl;

	return 0;
}


/*
C:\Users\bryce\CLionProjects\CSCI1\problem_9_median_function.exe
Median of odd array: 5
Median of even array: 5

Process finished with exit code 0
*/