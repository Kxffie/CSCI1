//
// Created by bryce on 3/4/2025.
//

#include "lab6_7_convertmoney.h"
#include <iostream>
#include <iomanip>
using namespace std;

const float EURO_RATE = 1.06;
const float PESO_RATE = 9.73;
const float YEN_RATE  = 124.35;

void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);

int main ()
{
    float dollars;
    float euros;
    float pesos;
    float yen;
    cout << fixed << showpoint << setprecision(2);

    cout << "Please input the amount of American Dollars you want converted " << endl;
    cout << "to euros and pesos" << endl;
    cin >> dollars;
    convertMulti(dollars, euros, pesos);
    cout << dollars << " dollars is converted to " << euros << " euros and " << pesos << " pesos." << endl;

    cout << "\nPlease input the amount of American Dollars you want converted" << endl;
    cout << "to euros, pesos and yen" << endl;
    cin >> dollars;
    convertMulti(dollars, euros, pesos, yen);
    cout << dollars << " dollars is converted to " << euros << " euros, " << pesos << " pesos and " << yen << " yen." << endl;

    cout << "\nPlease input the amount of American Dollars you want converted" << endl;
    cout << "to yen" << endl;
    cin >> dollars;
    yen = convertToYen(dollars);
    cout << dollars << " dollars is converted to " << yen << " yen." << endl;

    cout << "\nPlease input the amount of American Dollars you want converted" << endl;
    cout << "to euros" << endl;
    cin >> dollars;
    euros = convertToEuros(dollars);
    cout << dollars << " dollars is converted to " << euros << " euros." << endl;

    cout << "\nPlease input the amount of American Dollars you want converted" << endl;
    cout << "to pesos" << endl;
    cin >> dollars;
    pesos = convertToPesos(dollars);
    cout << dollars << " dollars is converted to " << pesos << " pesos." << endl;

    return 0;
}

void convertMulti(float dollars, float& euros, float& pesos)
{
    euros = dollars * EURO_RATE;
    pesos = dollars * PESO_RATE;
    cout << "\nFunction convertMulti (euros and pesos) called with " << dollars << " dollars" << endl;
}

void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
    euros = dollars * EURO_RATE;
    pesos = dollars * PESO_RATE;
    yen = dollars * YEN_RATE;
    cout << "\nFunction convertMulti (euros, pesos, and yen) called with " << dollars << " dollars" << endl;
}

float convertToYen(float dollars)
{
    cout << "\nFunction convertToYen called with " << dollars << " dollars" << endl;
    return dollars * YEN_RATE;
}

float convertToEuros(float dollars)
{
    cout << "\nFunction convertToEuros called with " << dollars << " dollars" << endl;
    return dollars * EURO_RATE;
}

float convertToPesos(float dollars)
{
    cout << "\nFunction convertToPesos called with " << dollars << " dollars" << endl;
    return dollars * PESO_RATE;
}

/*
*Please input the amount of American Dollars you want converted
to euros and pesos
100

Function convertMulti (euros and pesos) called with 100.00 dollars
100.00 dollars is converted to 106.00 euros and 973.00 pesos.

Please input the amount of American Dollars you want converted
to euros, pesos and yen
1000

Function convertMulti (euros, pesos, and yen) called with 1000.00 dollars
1000.00 dollars is converted to 1060.00 euros, 9730.00 pesos and 124350.00 yen.

Please input the amount of American Dollars you want converted
to yen
1000

Function convertToYen called with 1000.00 dollars
1000.00 dollars is converted to 124350.00 yen.

Please input the amount of American Dollars you want converted
to euros
1000

Function convertToEuros called with 1000.00 dollars
1000.00 dollars is converted to 1060.00 euros.

Please input the amount of American Dollars you want converted
to pesos
1000

Function convertToPesos called with 1000.00 dollars
1000.00 dollars is converted to 9730.00 pesos.
*/