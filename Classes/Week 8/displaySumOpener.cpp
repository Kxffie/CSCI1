//
// Created by bryce on 2/24/2025.
//

/*
Write a C++ program that creates a function called displaySum.  The displaySum function should take in two doubles as parameters and should cout the sum of those two parameters.
Test the function in the main program.
Item
Step 2 User inputStep 2 User input
Write another function in your program called getDouble() that prompts the user to enter a double and then collects that double from the user and returns it.
Item
Step 3: display ProductStep 3: display Product
Create a new function that takes in two doubles as parameters and displays their product to the user through cout.
Item
Step 4: display differenceStep 4: display difference
Create a new function called displayDifference that takes in two doubles as parameters and then returns the difference between the two.
Item
Step 5: ExecuteAdditionStep 5: ExecuteAddition
Create a new function called executeAddition that takes no parameter and returns no value.  This function should call the getNumber function to collect two doubles, and then the displaySum function to display the sum of those two numbers.
Item
Step 6: ExecuteSubtractionStep 6: ExecuteSubtraction
Create a new function called executeSubtraction that takes no parameter and returns no value.  This function should call the getNumber function to collect two doubles, and then the getDifference function to display the difference of those two numbers.
Item
Step 7: ExecuteMultiplicationStep 7: ExecuteMultiplication
Create a new function called executeMultiplication that takes no parameter and returns no value.  This function should call the getNumber function to collect two doubles, and then the getProduct function to display the product of those two numbers.
Item
Step 8: MenuStep 8: Menu
Create a new function called displayMenu() that displays three menu choices to the user: A. Find the sum, B. Find the difference, C. Find the product.
Item
Step 9: displayErrorStep 9: displayError
Create another function called displayError, that takes in a string called message, and displays to the console, "Error!  " followed by whatever is in the message variable.
Item
Step 10: Collect User ChoiceStep 10: Collect User Choice
Write a function called getChoice that collects a user's choice A, B, or C.  Make sure you validate the input.  Use the displayError(string message) function to display an error.  Return the user's choice.
Sample outputs:
Please choose (A, B, or C):
F
Error! Invalid Choice!
Please choose (A, B, or C):
C

Item
Step 11: displayOptionStep 11: displayOption
Write another function called displayOption that takes in a character, and calls the appropriate function based on that character.  Use a switch statement.  A would be sum, B would be difference, and C would be product the default option should call the displayError(string message) function with an appropriate error message.  Depending on the user choice, run the execute option related to that choice.

Item
Step 12: Some Assembly RequiredStep 12: Some Assembly Required
Put the functions you have defined together into the main function, to ask the user for a choice, and for each choice, call the appropriate functions to do what the user asks.

Make sure to check the answer as lowercase

 */

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