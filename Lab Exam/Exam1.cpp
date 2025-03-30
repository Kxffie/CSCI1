//
// Created by bryce on 2/26/2025.
// Developed in CLion
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

constexpr double THRESHOLD1 = 100.0;
constexpr double HANDLING1 = 2.30;
constexpr double SHIPPING_MULT1 = 0.15;

constexpr double THRESHOLD2 = 200.0;
constexpr double HANDLING2 = 5.65;
constexpr double SHIPPING_MULT2 = 0.25;

constexpr double THRESHOLD3 = 300.0;
constexpr double HANDLING3 = 10.40;
constexpr double SHIPPING_MULT3 = 0.35;

// no threshold; X > 300 | $15.35 | $0.45 for each cubic inch > 300
constexpr double HANDLING4 = 15.35;
constexpr double SHIPPING_MULT4 = 0.45;

constexpr double PI = 3.1416;

constexpr double cylinderVolume(const double radius, const double height) {
    return PI * radius * radius * height;
}

constexpr double sphereVolume(const double radius) {
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

constexpr double coneVolume(const double radius, const double height) {
    return (1.0 / 3.0) * PI * radius * radius * height;
}

void calculate(const double volume, double &handlingCharge, double &shippingCharge) {
    if (volume > THRESHOLD3) { // this is for the check if X > 300
        handlingCharge = HANDLING4;
        shippingCharge = (volume - THRESHOLD3) * SHIPPING_MULT4;
    }
    else if (volume > THRESHOLD2) {
        handlingCharge = HANDLING3;
        shippingCharge = (volume - THRESHOLD2) * SHIPPING_MULT3;
    }
    else if (volume > THRESHOLD1) {
        handlingCharge = HANDLING2;
        shippingCharge = (volume - THRESHOLD1) * SHIPPING_MULT2;
    }
    else if (volume > 0) {
        handlingCharge = HANDLING1;
        shippingCharge = volume * SHIPPING_MULT1;
    }
    else {
        handlingCharge = 0.0;
        shippingCharge = 0.0;
    }
}


int main() { // idk why i get the warning "Function 'main' always returns 0", but the code works
    string buyerName;
    cout << "Buyer name: ";
    getline(cin, buyerName);

    cout << "Please enter your choice of shape from the following menu:\n"
         << "1. Cylinder\n 2. Sphere\n 3. Cone\n 4. Quit\n\n"
         << "Menu Choice: ";
    int choice;
    cin >> choice;

    if (choice < 1 || choice > 4) { // anything other than 1-4 is wrong and cancels program
        cout << "\nInvalid menu choice – Run program again." << endl;
        return 0;
    }

    double radius = 0.0, height = 0.0, volume = 0.0;
    string shapeName;

    switch (choice) { // all 4 menu options
        case 1:
            shapeName = "cylinder";
            cout << "Radius of the cylinder: ";
            cin >> radius;
            cout << "Height of the cylinder: ";
            cin >> height;
            volume = cylinderVolume(radius, height);
            break;
        case 2:
            shapeName = "sphere";
            cout << "Radius of the sphere: ";
            cin >> radius;
            volume = sphereVolume(radius);
            break;
        case 3:
            shapeName = "cone";
            cout << "Radius of the cone: ";
            cin >> radius;
            cout << "Height of the cone: ";
            cin >> height;
            volume = coneVolume(radius, height);
            break;
        case 4:
            cout << "\nThank you for using this program :)" << endl;
            return 0;

        default: return 0;
    }

    double handlingCharge = 0.0, shippingCharge = 0.0;
    calculate(volume, handlingCharge, shippingCharge);
    const double totalCharges = handlingCharge + shippingCharge;

    cout << fixed << setprecision(1);
    cout << "\nShipping Charges for " << buyerName << "\n\n";
    cout << "Dimensions of the " << shapeName << ":\n";
    cout << "Radius: " << radius << " inches" << endl;

    if (choice == 1 || choice == 3) {
        cout << "Height: " << height << " inches" << endl;
    }
    cout << "\nVolume: " << volume << " cubic inches\n\n";

    cout << fixed << setprecision(2);
    cout << "Handling Charge\t $" << handlingCharge << endl;
    cout << "Shipping Charge\t $" << shippingCharge << endl;
    cout << "Total Charges\t $" << totalCharges << endl;

    return 0;
}


/*

Buyer name:Yuka Nagayoshi
Please enter your choice of shape from the following menu:
1. Cylinder
2. Sphere
3. Cone
4. Quit

Menu Choice:3
Radius of the cone:5.3
Height of the cone:9.4

Shipping Charges for uka Nagayoshi

Dimensions of the cone:
Radius: 5.3 inches
Height: 9.4 inches

Volume: 276.5 cubic inches

Handling Charge $10.40
Shipping Charge $26.78
Total Charges   $37.18

Process finished with exit code 0

--------------------------------

Buyer name:Yuka Nagayoshi
 Please enter your choice of shape from the following menu:
1. Cylinder
2. Sphere
3. Cone
4. Quit

Menu Choice:1
 Radius of the cylinder:2.3
 Height of the cylinder:3.4

Shipping Charges for uka Nagayoshi

Dimensions of the cylinder:
Radius: 2.3 inches
Height: 3.4 inches

Volume: 56.5 cubic inches

Handling Charge $2.30
Shipping Charge $8.48
Total Charges   $10.78

Process finished with exit code 0

--------------------------------

Buyer name:Conway Online
 Please enter your choice of shape from the following menu:
1. Cylinder
2. Sphere
3. Cone
4. Quit

Menu Choice:2
 Radius of the sphere:7.5

Shipping Charges for onway Online

Dimensions of the sphere:
Radius: 7.5 inches

Volume: 1767.1 cubic inches

Handling Charge $15.35
Shipping Charge $660.22
Total Charges   $675.57

Process finished with exit code 0

--------------------------------

Buyer name:University of Central Arkansas
 Please enter your choice of shape from the following menu:
1. Cylinder
2. Sphere
3. Cone
4. Quit

Menu Choice:5
 Invalid menu choice - Run program again.

Process finished with exit code 0

--------------------------------

Buyer name:None
 Please enter your choice of shape from the following menu:
1. Cylinder
2. Sphere
3. Cone
4. Quit

Menu Choice:4
 Thank you for using this program:)

*/