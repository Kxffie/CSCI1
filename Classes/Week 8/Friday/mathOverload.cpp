//
// Created by bryce on 2/28/2025.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

double getDouble() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

int getInt() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    return num;
}

string getDisplaySum(double num1, double num2) {
    return "The sum of " + to_string(num1) + " and " + to_string(num2) + " is " + to_string(num1 + num2);
}

string getDisplayDifference(double num1, double num2) {
    return "The difference of " + to_string(num1) + " and " + to_string(num2) + " is " + to_string(num1 - num2);
}

string getDisplayProduct(double num1, double num2) {
    return "The product of " + to_string(num1) + " and " + to_string(num2) + " is " + to_string(num1 * num2);
}

string getDisplaySum(int num1, int num2) {
    return "The sum of " + to_string(num1) + " and " + to_string(num2) + " is " + to_string(num1 + num2);
}

string getDisplayDifference(int num1, int num2) {
    return "The difference of " + to_string(num1) + " and " + to_string(num2) + " is " + to_string(num1 - num2);
}

string getDisplayProduct(int num1, int num2) {
    return "The product of " + to_string(num1) + " and " + to_string(num2) + " is " + to_string(num1 * num2);
}

void writeToConsole(string text) {
    cout << text << endl;
}

void writeToFile(string text, string fileName) {
    ofstream outFile(fileName);
    if (outFile) {
        outFile << text << endl;
        outFile.close();
        cout << "Output written to file " << fileName << endl;
    } else {
        cout << "Error opening file " << fileName << endl;
    }
}

char getOutputChoice() {
    char choice;
    cout << "Print to Console or File? (C/F): ";
    cin >> choice;
    return toupper(choice);
}

string getFileName() {
    string fileName;
    cout << "Enter the file name: ";
    cin >> fileName;
    return fileName;
}

void displayMenu() {
    cout << "A. Find the sum\nB. Find the difference\nC. Find the product\nD. Quit" << endl;
}

char getChoice() {
    char choice;
    cout << "Please choose (A, B, C, or D): ";
    cin >> choice;
    return toupper(choice);
}

void executeAddition() {
    static int addCount = 0;
    addCount++;
    cout << "Addition has been executed " << addCount << " times." << endl;

    double num1 = getDouble();
    double num2 = getDouble();
    string resultStr = getDisplaySum(num1, num2);

    char outputChoice = getOutputChoice();
    if (outputChoice == 'C') {
        writeToConsole(resultStr);
    } else if (outputChoice == 'F') {
        string fileName = getFileName();
        writeToFile(resultStr, fileName);
    } else {
        cout << "Invalid output choice." << endl;
    }
}

void executeSubtraction() {
    static int subCount = 0;
    subCount++;
    cout << "Subtraction has been executed " << subCount << " times." << endl;

    double num1 = getDouble();
    double num2 = getDouble();
    string resultStr = getDisplayDifference(num1, num2);

    char outputChoice = getOutputChoice();
    if (outputChoice == 'C') {
        writeToConsole(resultStr);
    } else if (outputChoice == 'F') {
        string fileName = getFileName();
        writeToFile(resultStr, fileName);
    } else {
        cout << "Invalid output choice." << endl;
    }
}

void executeMultiplication() {
    static int mulCount = 0;
    mulCount++;
    cout << "Multiplication has been executed " << mulCount << " times." << endl;

    double num1 = getDouble();
    double num2 = getDouble();
    string resultStr = getDisplayProduct(num1, num2);

    char outputChoice = getOutputChoice();
    if (outputChoice == 'C') {
        writeToConsole(resultStr);
    } else if (outputChoice == 'F') {
        string fileName = getFileName();
        writeToFile(resultStr, fileName);
    } else {
        cout << "Invalid output choice." << endl;
    }
}

int main() {
    while (true) {
        displayMenu();
        char choice = getChoice();
        if (choice == 'D') {
            cout << "Exiting the program." << endl;
            break;
        }
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
                cout << "Invalid choice." << endl;
                break;
        }
        cout << endl;
    }
    return 0;
}
