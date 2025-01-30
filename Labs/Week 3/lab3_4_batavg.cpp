//
// Created by bryce on 1/29/2025.
//

#include "lab3_4_batavg.h"
#include <iostream>
#include <iomanip>

using namespace std;

constexpr int AT_BAT = 421;
constexpr int HITS = 123;

int main() {
    double batAvg = static_cast<double>(HITS) / AT_BAT;

    cout << fixed << setprecision(6);
    cout << "The batting average is " << batAvg << endl;

    return 0;
}
