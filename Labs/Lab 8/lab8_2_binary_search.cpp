//
// Created by bryce on 3/21/2025.
//

#include "lab8_2_binary_search.h"
#include <iostream>
using namespace std;

int binarySearch(int [], int, int);
const int SIZE = 16;

int main() {
	int found, value;
	int array[SIZE] = {34, 19, 19, 18, 17, 13, 12, 12, 12, 11, 9, 5, 3, 2, 2, 0};

	cout << "Enter an integer to search for:" << endl;
	cin >> value;

	found = binarySearch(array, SIZE, value);

	if (found == -1)
		cout << "The value " << value << " is not in the list" << endl;
	else
		cout << "The value " << value << " is in position number " << found + 1 << " of the list" << endl;

	return 0;
}

int binarySearch(int array[], int numElems, int value) {
	int first = 0;
	int last = numElems - 1;
	int middle;

	while (first <= last) {
		middle = first + (last - first) / 2;
		if (array[middle] == value)
			return middle;
		else if (array[middle] < value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return -1;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab8_2_binary_search.exe
Enter an integer to search for:
25
The value 25 is not in the list

Process finished with exit code 0

C:\Users\bryce\CLionProjects\CSCI1\lab8_2_binary_search.exe
Enter an integer to search for:
34
The value 34 is in position number 1 of the list

Process finished with exit code 0
*/
