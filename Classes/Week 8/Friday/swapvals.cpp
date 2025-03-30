//
// Created by bryce on 2/28/2025.
//

/*
Create a function called swapValues that takes two references to integer variables and swaps the values in the variables with each other.
The function prototype will be
void swapValues( int &num1, int &num2);
Sample output:
Enter the value of num1: 10
Enter the value of num2: 20
Before swapping:
num1 = 10
num2 = 20
After swapping:
num1 = 20
num2 = 10

 */

#include "swapvals.h"
#include <iostream>
using namespace std;


void swapvals(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
	int num1, num2;
	cout << "Enter the value of num1: ";
	cin >> num1;
	cout << "Enter the value of num2: ";
	cin >> num2;

	cout << "Before swapping:" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	swapvals(num1, num2);

	cout << "After swapping:" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	return 0;
}