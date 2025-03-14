//
// Created by bryce on 1/29/2025.
//

#include "lab3_3_righttrig.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    float a, b;
    float hyp;

    cout << "Please input the value of the two sides: ";
    cin >> a >> b;

    hyp = sqrt(pow(a, 2) + pow(b, 2));

    cout << setw(10) << left << "Side 1:" << setw(10) << a << endl;
    cout << setw(10) << left << "Side 2:" << setw(10) << b << endl;
    cout << setw(10) << left << "Hypotenuse:" << setw(10) << fixed << setprecision(2) << hyp << endl;

    return 0;
}
