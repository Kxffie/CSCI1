//
// Created by bryce on 3/12/2025.
//

#include "maththing.h"

#include <iostream>
using namespace std;

int main() {
 const int SIZE = 5;
 int numbers[SIZE];

 for (int i = 0; i < SIZE; i++) {
  cout << "Enter an integer: ";
  cin >> numbers[i];
 }

 int max = numbers[0];
 int min = numbers[0];
 int sum = numbers[0];

 for (int i = 1; i < SIZE; i++) {
  if (numbers[i] > max) {
   max = numbers[i];
  }
  if (numbers[i] < min) {
   min = numbers[i];
  }
  sum += numbers[i];
 }

 double average = sum / static_cast<double>(SIZE);

 cout << "Max: " << max << "\n";
 cout << "Min: " << min << "\n";
 cout << "Average: " << average << "\n";

 return 0;
}
