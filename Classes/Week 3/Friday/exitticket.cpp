//
// Created by bryce on 1/31/2025.
//

#include "exitticket.h"
#include <iostream>

using namespace std;

int main() {
  int a, b; char op;
  cout << "Enter two integers and an operation (+, -, *, /, %) (ex. 2 + 2): ";
  cin >> a >> op >> b;

  switch (op) {
    case '+': cout << a << " + " << b << " = " << a + b; break;
    case '-': cout << a << " - " << b << " = " << a - b; break;
    case '*': cout << a << " * " << b << " = " << a * b; break;
    case '/': cout << a << " / " << b << " = " << a / b; break;
    case '%': cout << a << " % " << b << " = " << a % b; break;
    default: cout << "Invalid operation.";
  }
  return 0;
}
