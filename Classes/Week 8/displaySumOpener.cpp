//
// Created by bryce on 2/24/2025.
//

#include "displaySumOpener.h"
#include <iostream>
using namespace std;

void displaySum(double num1, double num2) {
    cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
}

double getDouble() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

void displayProduct(double num1, double num2) {
    cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
}

double displayDifference(double num1, double num2) {
	return num1 - num2;
}

void executeAddition() {
	double num1 = getDouble();
	double num2 = getDouble();
	displaySum(num1, num2);
}

void executeSubtraction() {
    double num1 = getDouble();
    double num2 = getDouble();
    cout << "The difference of " << num1 << " and " << num2 << " is " << displayDifference(num1, num2) << endl;
}

void executeMultiplication() {
	double num1 = getDouble();
	double num2 = getDouble();
	displayProduct(num1, num2);
}

void displayMenu() {
    cout << "A. Find the sum\nB. Find the difference\nC. Find the product\n";
}

void displayError(string message) {
    cout << "Error! " << message << endl;
}

// make choice uppercase
char getChoice() {
	char choice;
	cout << "Please choose (A, B, or C): ";
	cin >> choice;
	return toupper(choice);
}

void displayOption(char choice) {
    switch (choice) {
        case 'A':
            executeAddition();
            break;
        case 'B':
            executeSubtraction();
            break;
        case 'C':
            executeMultiplication();
            break;
        default:
            displayError("Invalid Choice!");
    }
}

int main() {
    displayMenu();
    char choice = getChoice();
    displayOption(choice);
    return 0;
}

/*
A. Find the sum
B. Find the difference
C. Find the product
Please choose (A, B, or C):a
 Enter a number:10
 Enter a number:100
 The sum of 10 and 100 is 110

Process finished with exit code 0

A. Find the sum
B. Find the difference
C. Find the product
Please choose (A, B, or C):b
 Enter a number:10
 Enter a number:100
 The difference of 10 and 100 is -90

Process finished with exit code 0

A. Find the sum
B. Find the difference
C. Find the product
Please choose (A, B, or C):c
 Enter a number:10
 Enter a number:100
 The product of 10 and 100 is 1000

Process finished with exit code 0

A. Find the sum
B. Find the difference
C. Find the product
Please choose (A, B, or C):f
 Error! Invalid Choice!

Process finished with exit code 0
*/