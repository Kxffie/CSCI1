//
// Created by bryce on 2/14/2025.
//

#include "lab5_2_dowhile.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int number;             // Number of cups
    float cost = 0.0;       // Total cost for the beverage order
    char beverage;          // Beverage selection
    bool validBeverage;

    cout << fixed << showpoint << setprecision(2);

    do {
        cout << "\nHot Beverage Menu\n\n";
        cout << "A: Coffee      $1.00" << endl;
        cout << "B: Tea         $0.75" << endl;
        cout << "C: Hot Chocolate $1.25" << endl;
        cout << "D: Cappuccino  $2.50" << endl;
        cout << "E: Exit" << endl << endl;
        cout << "Enter your choice (A, B, C, D, or E to exit): ";
        cin >> beverage;

        // Validate the beverage letter
        switch(beverage)
        {
            case 'a': case 'A':
            case 'b': case 'B':
            case 'c': case 'C':
            case 'd': case 'D':
                validBeverage = true;
                break;
            case 'e': case 'E':
                validBeverage = true;  // valid exit choice
                break;
            default:
                validBeverage = false;
        }

        if (!validBeverage)
        {
            cout << "Invalid selection. Please try again." << endl;
            continue;  // Skip the rest and prompt again
        }

        if (beverage == 'e' || beverage == 'E')
            break;

        cout << "How many cups would you like? ";
        cin >> number;

        switch(beverage)
        {
            case 'a': case 'A':
                cost = number * 1.00;
                break;
            case 'b': case 'B':
                cost = number * 0.75;
                break;
            case 'c': case 'C':
                cost = number * 1.25;
                break;
            case 'd': case 'D':
                cost = number * 2.50;
                break;
        }
        cout << "The total cost is $" << cost << endl;

    } while(beverage != 'e' && beverage != 'E');

    cout << "Thank you! Please come again." << endl;
    return 0;
}

/*
*
Hot Beverage Menu

A: Coffee      $1.00
B: Tea         $0.75
C: Hot Chocolate $1.25
D: Cappuccino  $2.50
E: Exit

Enter your choice (A, B, C, D, or E to exit):a
How many cups would you like?10
The total cost is $10.00

Hot Beverage Menu

A: Coffee      $1.00
B: Tea         $0.75
C: Hot Chocolate $1.25
D: Cappuccino  $2.50
E: Exit

Enter your choice (A, B, C, D, or E to exit):D
How many cups would you like?2
The total cost is $5.00

Hot Beverage Menu

A: Coffee      $1.00
B: Tea         $0.75
C: Hot Chocolate $1.25
D: Cappuccino  $2.50
E: Exit

Enter your choice (A, B, C, D, or E to exit):E
Thank you! Please come again.

Process finished with exit code 0
*/