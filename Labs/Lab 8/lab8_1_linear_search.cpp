//
// Created by bryce on 3/21/2025.
//

#include "lab8_1_linear_search.h"
#include <iostream>
using namespace std;

int searchList(char[], int, char);
const int SIZE = 8;

int main() {
	char word[SIZE] = "Harpoon";
	int found;
	char ch;

	cout << "Enter a letter to search for:" << endl;
	cin >> ch;

	found = searchList(word, SIZE, ch);

	if (found == -1)
		cout << "The letter " << ch << " was not found in the list" << endl;
	else
		cout << "The letter " << ch << " is in the " << found + 1 << " position of the list" << endl;

	return 0;
}
int searchList(char list[], int numElems, char value) {
	for (int count = 0; count < numElems; count++) {
		if (list[count] == value)
			return count;
	}
	return -1;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab8_1_linear_search.exe
Enter a letter to search for:
a
The letter a is in the 2 position of the list

Process finished with exit code 0

C:\Users\bryce\CLionProjects\CSCI1\lab8_1_linear_search.exe
Enter a letter to search for:
z
The letter z was not found in the list

Process finished with exit code 0

*/