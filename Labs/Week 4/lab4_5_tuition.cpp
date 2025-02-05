//
// Created by bryce on 2/5/2025.
//

#include "lab4_5_tuition.h"
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

    double costPerShirt = 12;
    double totalCost = shirts * costPerShirt;

    if (shirts >= 5 && shirts <= 10) {
        costPerShirt *= 0.9;
        totalCost = shirts * costPerShirt;
    } else if (shirts >= 11 && shirts <= 20) {
        costPerShirt *= 0.85;
        totalCost = shirts * costPerShirt;
    } else if (shirts >= 21 && shirts <= 30) {
        costPerShirt *= 0.8;
        totalCost = shirts * costPerShirt;
    } else if (shirts >= 31) {
        costPerShirt *= 0.75;
        totalCost = shirts * costPerShirt;
    }

    cout << "The cost per shirt is $" << costPerShirt << " and the total cost is $" << totalCost << endl;

    return 0;
}