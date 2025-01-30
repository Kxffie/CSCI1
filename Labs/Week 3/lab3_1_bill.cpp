//
// Created by bryce on 1/29/2025.
//

#include "lab3_1_bill.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  string itemName;
  float quantity;
  float itemPrice;

  cout << setprecision(2) << fixed << showpoint;

  cout << "Please input the name of the item: ";
  getline(cin, itemName); // Allows spaces in the item name

  cout << "Please input the number of items bought: ";
  cin >> quantity;

  cout << "Please input the price of each item: ";
  cin >> itemPrice;

  const float totalBill = quantity * itemPrice;

  cout << endl;
  cout << "The item that you bought is " << itemName << endl;
  cout << setw(15) << "Price" << setw(12) << "Quantity" << setw(15) << "Total" << endl;
  cout << setw(15) << itemPrice << setw(12) << quantity << setw(15) << totalBill << endl;

  return 0;
}
