//
// Created by bryce on 2/5/2025.
//

#include "lab4_1_initialize.h"
#include <iostream>
using namespace std;
void original( )
{
	int num1;
	constexpr int num2 = 5;
	cout << "Please enter an integer" << endl;
	cin >> num1;
	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
	if (num1 == num2)
		cout << "Hey, that's a coincidence!" << endl;

	if (num1 != num2)
		cout << "The values are not the same" << endl;
}

void exercise2( )
{
	int num1, num2;
	cout << "Please enter an integer" << endl;
	cin >> num1;
	cout << "Please enter another integer" << endl;
	cin >> num2;
	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
	if (num1 == num2)
		cout << "Hey, that's a coincidence!" << endl;

	if (num1 != num2)
		cout << "The values are not the same" << endl;
}

void exercise3() {
	int num1, num2;
	cout << "Please enter an integer" << endl;
	cin >> num1;
	cout << "Please enter another integer" << endl;
	cin >> num2;
	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
	if (num1 == num2) {
		cout << "The values are the same." << endl;
		cout << "Hey, that's a coincidence!" << endl;
	}
	if (num1 != num2)
		cout << "The values are not the same" << endl;
}

void exercise4() {
	int num1, num2;
	cout << "Please enter an integer" << endl;
	cin >> num1;
	cout << "Please enter another integer" << endl;
	cin >> num2;
	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
	if (num1 == num2) {
		cout << "The values are the same." << endl;
		cout << "Hey, that's a coincidence!" << endl;
	} else {
		cout << "The values are not the same" << endl;
	}
}

int main() {
  	original();
	exercise2();
	exercise3();
	exercise4();
	return 0;
}