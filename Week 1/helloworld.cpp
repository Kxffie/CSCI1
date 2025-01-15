//
// Created by bryce on 1/13/2025.
//

#include "helloworld.h"
#include <iostream>
using namespace std;


//int main() {
  //std::cout << "Hello World!\n";
  //return 0;
  //}

// easiest program ever
//

int main() {
  double hours, rate, pay;

  std::cout << "Please enter hours";
  std::cin >> hours;

  std::cout << "Please enter rate";
  std::cin >> rate;

  pay = hours * rate;

  std::cout << "You have earned $" << pay << endl;

  helloworld();
  return 0;
}

void helloworld() {
  std::cout << "Hello world!" << endl;
}