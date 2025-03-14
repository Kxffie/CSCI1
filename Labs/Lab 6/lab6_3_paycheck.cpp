//
// Created by bryce on 3/5/2025.
//

#include "lab6_3_paycheck.h"
#include <iostream>
#include <iomanip>
using namespace std;

void printDescription();
void computePaycheck(float rate, int time);

int main() {
	float payRate;
	int hours;
	cout << setprecision(2) << fixed;
	cout << "Welcome to the Pay Roll Program" << endl;
	printDescription();
	cout << "Please input the pay per hour: ";
	cin >> payRate;
	cout << "Please input the number of hours worked: ";
	cin >> hours;
	cout << endl;
	computePaycheck(payRate, hours);
	cout << "We hope you enjoyed this program" << endl;
	return 0;
}

void printDescription() {
	cout << "************************************************" << endl;
	cout << "This program takes pay rate and hours worked" << endl;
	cout << "to compute gross pay and net pay (15% deducted)" << endl;
	cout << "************************************************" << endl << endl;
}

void computePaycheck(float rate, int time) {
	float gross = rate * time;
	float net = gross - (gross * 0.15f);
	cout << "Gross pay is $" << gross << endl;
	cout << "Net pay is $" << net << endl;
}

/*
Welcome to the Pay Roll Program
************************************************
This program takes pay rate and hours worked
to compute gross pay and net pay (15% deducted)
************************************************

Please input the pay per hour:10
Please input the number of hours worked:100

Gross pay is $1000.00
Net pay is $850.00
We hope you enjoyed this program
*/