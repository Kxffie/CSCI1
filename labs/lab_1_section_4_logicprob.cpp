//
// Created by bryce on 1/15/2025.
//

#include "lab_1_section_4_logicprob.h"
#include <iostream>
using namespace std;



int main() {
  float firstNumber;
  float secondNumber;
  float newFirstNumber;

  cout << "Please enter the first number: " << endl;
  cout << "Then hit enter" << endl;
  cin >> firstNumber;

  cout << "Enter the second number" << endl;
  cout << "Then hit enter" << endl;
  cin >> secondNumber;

  cout << endl << "You input the nubmers as " << firstNumber << " and " << secondNumber << endl;

  // swap the first and second number, my solution
  newFirstNumber = firstNumber;
  firstNumber = secondNumber;
  secondNumber = newFirstNumber;

  cout << "After swapping, the values of the two numbers are " << firstNumber << " and " << secondNumber << endl;



  return 0;
}