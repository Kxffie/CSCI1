//
// Created by bryce on 1/24/2025.
//

#include "opener.h"
#include <iostream>
using namespace std;

int main() {
  string name;
  int apples;

  cout << "Enter your name: ";
  cin >> name;

  cout << "Enter the number of apples you have eaten in the last 30 days: ";
  cin >> apples;

  const int moreApples = 30 - apples;

  cout << name << ", you have to eat " << moreApples << " today to keep the doctor away!" << endl;

  return 0;
}

