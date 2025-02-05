//
// Created by bryce on 2/5/2025.
//

#include "opener.h"
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number (1, 2, 3, or 4): ";
    cin >> number;

    switch (number) {
        case 1: cout << "One for the money." << endl;
            break;
        case 2: cout << "Two for the show." << endl;
            break;
        case 3: cout << "Three to get ready." << endl;
            break;
        case 4: cout << "Four to GO, GO, GO!" << endl;
            break;
        default: cout << "Invalid number." << endl;
    }

    return 0;
}