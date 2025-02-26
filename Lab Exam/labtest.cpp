//
// Created by bryce on 2/26/2025.
//

#include "labtest.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const double PI = 3.1416;

int main() {
    string name;
    cout << "Buyer name: ";
    cin.ignore(); // To clear any leftover newline characters
    getline(cin, name);

    cout << "Please enter your choice of shape from the following menu:\n";
    cout << "1. Cylinder\n2. Sphere\n3. Cone\n4. Quit\n\n";
    cout << "Menu Choice: ";
    int choice;
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "Invalid menu choice – Run program again.\n";
        return 0;
    }

    if (choice == 4) {
        cout << "Thank you for using this program:)\n";
        return 0;
    }

    string shapeName;
    double radius, height, volume;

    switch (choice) {
        case 1:
            shapeName = "cylinder";
            cout << "Radius of the cylinder: ";
            cin >> radius;
            cout << "Height of the cylinder: ";
            cin >> height;
            volume = PI * radius * radius * height;
            break;
        case 2:
            shapeName = "sphere";
            cout << "Radius of the sphere: ";
            cin >> radius;
            volume = (4.0 / 3.0) * PI * radius * radius * radius;
            break;
        case 3:
            shapeName = "cone";
            cout << "Radius of the cone: ";
            cin >> radius;
            cout << "Height of the cone: ";
            cin >> height;
            volume = (1.0 / 3.0) * PI * radius * radius * height;
            break;
    }

    double handling, shipping;

    if (volume > 300) {
        handling = 15.35;
        shipping = (volume - 300) * 0.45;
    } else if (volume > 200) {
        handling = 10.40;
        shipping = (volume - 200) * 0.35;
    } else if (volume > 100) {
        handling = 5.65;
        shipping = (volume - 100) * 0.25;
    } else {
        handling = 2.30;
        shipping = volume * 0.15;
    }

    cout << "\nShipping Charges for " << name << "\n\n";
    cout << "Dimensions of the " << shapeName << ":\n";
    if (choice == 2) {
        cout << "Radius: " << radius << " inches\n";
    } else {
        cout << "Radius: " << radius << " inches\n";
        cout << "Height: " << height << " inches\n";
    }

    cout << fixed << setprecision(1);
    cout << "\nVolume: " << volume << " cubic inches\n\n";

    cout << fixed << setprecision(2);
    cout << "Handling Charge\t$" << handling << endl;
    cout << "Shipping Charge\t$" << shipping << endl;
    cout << "Total Charges\t$" << handling + shipping << endl;

    return 0;
}