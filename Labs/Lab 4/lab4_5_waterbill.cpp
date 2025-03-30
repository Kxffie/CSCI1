//
// Created by bryce on 2/5/2025.
//

/*
Please input your water bill for quarter 1:100
 Please input your water bill for quarter 2:100
 Please input your water bill for
 quarter 3:10000
 Please input your water bill for quarter 4:100
 Your average monthly bill is $2575. You are using excessive amou
nts of water
 */

#include "lab4_5_waterbill.h"
#include <iostream>
using namespace std;

int main() {
    float bill1, bill2, bill3, bill4;
    cout << "Please input your water bill for quarter 1: ";
    cin >> bill1;
    cout << "Please input your water bill for quarter 2: ";
    cin >> bill2;
    cout << "Please input your water bill for quarter 3: ";
    cin >> bill3;
    cout << "Please input your water bill for quarter 4: ";
    cin >> bill4;

    const float average = (bill1 + bill2 + bill3 + bill4) / 4;
    cout << "Your average monthly bill is $" << average << ". ";
    if (average > 75) {
        cout << "You are using excessive amounts of water" << endl;
    } else if (average >= 25) {
        cout << "You are using a typical amount of water" << endl;
    } else {
        cout << "You are conserving water" << endl;
    }
}