//
// Created by bryce on 4/14/2025.
//

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	const int MAX_LENGTH = 25;
	char name1[MAX_LENGTH], name2[MAX_LENGTH];

	cout << "Please input the first name (format: Last, First): ";
	cin.getline(name1, MAX_LENGTH);
	cout << "Please input the second name (format: Last, First): ";
	cin.getline(name2, MAX_LENGTH);

	int cmp = strcmp(name1, name2);
	if (cmp < 0) {
		cout << "Names in alphabetical order:" << endl;
		cout << name1 << endl << name2 << endl;
	}
	else if (cmp > 0) {
		cout << "Names in alphabetical order:" << endl;
		cout << name2 << endl << name1 << endl;
	}
	else {
		cout << "The names are the same:" << endl;
		cout << name1 << endl;
	}

	return 0;
}
