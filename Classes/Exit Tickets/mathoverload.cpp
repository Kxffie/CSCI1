//
// Created by bryce on 2/21/2025.
//

/*
Break out the Math problem from Monday (some assembly required, if you didn't do it).
Make some changes:
1. The display functions: change these to getDisplay functions that return a string representing the math equation of the two inputs, the opperation, and the result.
string getDisplaySum(double num1, double num2)
string getDisplayProduct(double num1, double num2)
string getDisplayDifference(double num1, double num2)
2.  Make overloaded copies of these functions that take integers instead of doubles.
3.  Then create two functions
void writeToConsole(string text)
void writeToFile(string text, string fileName)
4. Adjust the execute functions to ask the user if they want to print to console or print to string.  Then, call the appropriate function to print the string.
5.  Create static counter variables inside the execute functions that keep track of the number of times that that function has been called.  Each time the execute function is called, increment the count and print out a message to the console reporting how many have been executed.
6.  Put the whole system in an ongoing loop, so the user is continually asked to choose a math function, inputs, and to choose file or console.
 */

#include "mathoverload.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;



