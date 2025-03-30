//
// Created by bryce on 2/3/2025.
//

#include "exitticket.h"
#include <iostream>
using namespace std;

int main() {
    int percentage;
    cout << "Enter a percentage: ";
    cin >> percentage;

    switch (percentage / 10) {
        case 10:
        case 9:
            cout << "A" << endl;
            break;
        case 8:
            cout << "B" << endl;
            break;
        case 7:
            cout << "C" << endl;
            break;
        case 6:
            cout << "D" << endl;
            break;
        default:
            cout << "F" << endl;
    }

    return 0;
} 