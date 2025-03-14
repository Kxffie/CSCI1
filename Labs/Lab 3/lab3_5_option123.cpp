//
// Created by kxffie on 1/29/2025.
//

#include "lab3_5_option123.h"
#include <iostream>
#include <iomanip>

using namespace std;

void avgGrades() {
    double grade1, grade2, grade3;

    cout << "Enter three grades: ";
    cin >> grade1 >> grade2 >> grade3;

    const double average = (grade1 + grade2 + grade3) / 3.0;

    cout << fixed << setprecision(2)
         << "The average of the three grades is: " << average << endl;
}

void salesCalc() {
    constexpr double AMERICAN_COLONIAL_PRICE = 85.00, MODERN_PRICE = 57.50, FRENCH_CLASSICAL_PRICE = 127.75;
    int colonialSold, modernSold, classicalSold;

    cout << "Enter number of chairs sold (Colonial, Modern, French Classical): ";
    cin >> colonialSold >> modernSold >> classicalSold;

    const double totalColonial = colonialSold * AMERICAN_COLONIAL_PRICE,
             totalModern = modernSold * MODERN_PRICE,
             totalClassical = classicalSold * FRENCH_CLASSICAL_PRICE,
             totalSales = totalColonial + totalModern + totalClassical;

    cout << fixed << setprecision(2)
     << "\nSales Breakdown:\n"
     << "American Colonial: $" << totalColonial << "\n"
     << "Modern: $" << totalModern << "\n"
     << "French Classical: $" << totalClassical << "\n"
     << "Total Sales: $" << totalSales << endl;
}

void taxSalesCalc() {
    double totalSales, stateTaxRate, localTaxRate;

    cout << "Enter total sales (including tax), state tax %, and local tax %: ";
    cin >> totalSales >> stateTaxRate >> localTaxRate;

    stateTaxRate /= 100, localTaxRate /= 100;
    const double stateTax = totalSales * stateTaxRate, localTax = totalSales * localTaxRate, totalTax = stateTax + localTax;

    cout << fixed << setprecision(2)
         << "\nTax Breakdown:\n"
         << "State Tax: $" << stateTax << "\n"
         << "Local Tax: $" << localTax << "\n"
         << "Total Tax: $" << totalTax << endl;
}

int main() {
    cout << "Enter 1 for avgGrades, 2 for salesCalc, 3 for taxSalesCalc: " << endl;
    int choice;
    cin >> choice;

    if (choice == 1) {
        avgGrades();
    } else if (choice == 2) {
        salesCalc();
    } else if (choice == 3) {
        taxSalesCalc();
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}