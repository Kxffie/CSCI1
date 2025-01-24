//
// Created by bryce on 1/22/2025.
//

#include <iostream>
using namespace std;

int main() {
  string name;
  int age;

  cout << "Enter your name: ";
  cin >> name;

  cout << "Enter your age: ";
  cin >> age;

  cout << "Hello, " << name << ". You will be 80 years old in " << 80 - age << " years." << endl;

  return 0;
}