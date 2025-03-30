//
// Created by bryce on 3/21/2025.
//

#include "opener.h"
#include <iostream>
using namespace std;

int collectNum() {
	int num;
	cout << "Please enter an integer:" << endl;
	cin >> num;
	return num;
}

int* numCollector() {
	int* nums = nullptr;
	int size;
	cout << "How many integers will you enter?" << endl;
	cin >> size;

	nums = new int[size + 1];
	*nums = size;

	for (int i = 1; i <= size; i++) {
		*(nums + i) = collectNum();
	}
	return nums;
}

void printNums(int* numsPtr, int size) {
	for (int i = 1; i <= size; i++) {
		cout << *(numsPtr + i) << endl;
	}
}

int main() {
	int* nums = numCollector();
	int size = *nums;

	cout << "\nThe numbers entered are:" << endl;
	printNums(nums, size);

	delete [] nums;
	nums = nullptr;

	return 0;
}


/*
C:\Users\bryce\CLionProjects\CSCI1\opener.exe
How many integers will you enter?
4
Please enter an integer:
1
Please enter an integer:
4
Please enter an integer:
6
Please enter an integer:
87

The numbers entered are:
1
4
6
87

Process finished with exit code 0
*/