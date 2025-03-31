//
// Created by bryce on 3/31/2025.
//

#include <iostream>
using namespace std;

const int MAXNAME = 10;

int main() {
	int pos;
	char *name = nullptr;
	int *one = nullptr;
	int *two = nullptr;
	int *three = nullptr;
	int result;

	one = new int;
	two = new int;
	three = new int;

	name = new char[MAXNAME];

	cout << "Enter your last name with exactly 10 characters." << endl;
	cout << "If your name has < 10 characters, repeat last letter." << endl;
	cout << "Blanks at the end do not count." << endl;

	char *p = name;
	for (pos = 0; pos < MAXNAME; pos++) {
		cin >> *p;
		p++;
	}

	p = name;
	cout << "Hi ";
	for (pos = 0; pos < MAXNAME; pos++) {
		cout << *p;
		p++;
	}
	cout << endl;

	cout << "Enter three integer numbers separated by blanks" << endl;

	cin >> *one >> *two >> *three;

	cout << "The three numbers are: " << *one << " " << *two << " " << *three << endl;

	result = *one + *two + *three;
	cout << "The sum of the three values is " << result << endl;

	delete one;
	delete two;
	delete three;
	delete [] name;

	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab9_2_dynamic_memory.exe
Enter your last name with exactly 10 characters.
If your name has < 10 characters, repeat last letter.
Blanks at the end do not count.
Riordan123
Hi Riordan123
Enter three integer numbers separated by blanks
1 2 3
The three numbers are: 1 2 3
The sum of the three values is 6

Process finished with exit code 0
*/