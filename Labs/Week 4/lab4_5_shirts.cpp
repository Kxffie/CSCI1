//
// Created by bryce on 2/5/2025.
//

#include "lab4_5_shirts.h"
#include <iostream>
using namespace std;

int main() {
    int shirts;
    cout << "How many shirts would you like ?" << endl;
    cin >> shirts;

    if (shirts < 0) {
        cout << "Invalid Input: Please enter a nonnegative integer" << endl;
        return 1;
    }

    double price = 12;
    if (shirts >= 5 && shirts <= 10)
        price *= 0.9;
    else if (shirts >= 11 && shirts <= 20)
        price *= 0.85;
    else if (shirts >= 21 && shirts <= 30)
        price *= 0.8;
    else if (shirts >= 31)
        price *= 0.75;

    cout << "The cost per shirt is $" << price;
    cout << " and the total cost is $" << price * shirts << endl;

    return 0;
}