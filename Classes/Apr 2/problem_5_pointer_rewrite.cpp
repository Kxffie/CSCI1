//
// Created by bryce on 3/21/2025.
//

#include "problem_5_pointer_rewrite.h"
#include <iostream>
using namespace std;

int doSomething(int *x, int *y) {
	int temp = *x;
	*x = (*y) * 10;
	*y = temp * 10;
	return *x + *y;
}

int main() {
	int a = 3, b = 7;
	cout << "Before doSomething: a = " << a << ", b = " << b << endl;
	int result = doSomething(&a, &b);
	cout << "After doSomething: a = " << a << ", b = " << b << endl;
	cout << "Result = " << result << endl;
	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\problem_5_pointer_rewrite.exe
Before doSomething: a = 3, b = 7
After doSomething: a = 70, b = 30
Result = 100

Process finished with exit code 0
*/