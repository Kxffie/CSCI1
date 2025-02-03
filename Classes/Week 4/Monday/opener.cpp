//
// Created by bryce on 2/3/2025.
//

#include "opener.h"
#include <iostream>
using namespace std;

int main() {
    char response;

    cout << "Did you have a good weekend? (Y/N): ";
    cin >> response;

    if (tolower(response) == 'y') {
        cout << "That's great to hear!" << endl;
    } else if (tolower(response) == 'n') {
        cout << "I am sorry to hear that." << endl;
    } else {
        cout << "Sounds like someone has a case of the Mondays!" << endl;
    }

    return 0;
}