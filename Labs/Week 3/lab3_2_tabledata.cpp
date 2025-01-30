//
// Created by bryce on 1/29/2025.
//

#include "lab3_2_tabledata.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float price1, price2;
    int quantity1, quantity2;

    cout << setprecision(2) << fixed << showpoint;

    cout << "Please input the price and quantity of the first item: ";
    cin >> price1 >> quantity1;

    cout << "Please input the price and quantity of the second item: ";
    cin >> price2 >> quantity2;

    // Table Header
    cout << setw(15) << "PRICE" << setw(12) << "QUANTITY" << endl;
    cout << "----------------------------------" << endl;

    // Printing formatted data
    cout << setw(12) << left << price1 << setw(12) << quantity1 << endl;
    cout << setw(12) << left << price2 << setw(12) << quantity2 << endl;

    return 0;
}
