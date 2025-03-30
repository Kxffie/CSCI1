//
// Created by bryce on 3/13/2025.
//

#include "lab7_3_price.h"
#include <iostream>
#include <iomanip>
using namespace std;

const int MAXROWS = 10;
const int MAXCOLS = 10;
typedef float PriceType[MAXROWS][MAXCOLS];

void getPrices(PriceType, int&, int&);
void printPrices(PriceType, int, int);
float findHighestPrice(PriceType, int, int);
float findLowestPrice(PriceType, int, int);

int main() {
    int rowsUsed;
    int colsUsed;
    PriceType priceTable;

    getPrices(priceTable, rowsUsed, colsUsed);
    printPrices(priceTable, rowsUsed, colsUsed);

    float highest = findHighestPrice(priceTable, rowsUsed, colsUsed);
    float lowest = findLowestPrice(priceTable, rowsUsed, colsUsed);

    cout << "Highest Price: " << highest << endl;
    cout << "Lowest Price: " << lowest << endl;

    return 0;
}

void getPrices(PriceType table, int& numOfRows, int& numOfCols) {
    cout << "Please input the number of rows from 1 to " << MAXROWS << endl;
    cin >> numOfRows;
    cout << "Please input the number of columns from 1 to " << MAXCOLS << endl;
    cin >> numOfCols;
    for (int row = 0; row < numOfRows; row++) {
        for (int col = 0; col < numOfCols; col++) {
            cout << "Enter price for row " << row + 1 << ", column " << col + 1 << ": ";
            cin >> table[row][col];
        }
    }
}

void printPrices(PriceType table, int numOfRows, int numOfCols) {
    cout << fixed << showpoint << setprecision(2);
    for (int row = 0; row < numOfRows; row++) {
        for (int col = 0; col < numOfCols; col++) {
            cout << table[row][col] << "\t";
        }
        cout << endl;
    }
}

float findHighestPrice(PriceType table, int numOfRows, int numOfCols) {
    float highestPrice = table[0][0];
    for (int row = 0; row < numOfRows; row++) {
        for (int col = 0; col < numOfCols; col++) {
            if (table[row][col] > highestPrice)
                highestPrice = table[row][col];
        }
    }
    return highestPrice;
}

float findLowestPrice(PriceType table, int numOfRows, int numOfCols) {
    float lowestPrice = table[0][0];
    for (int row = 0; row < numOfRows; row++) {
        for (int col = 0; col < numOfCols; col++) {
            if (table[row][col] < lowestPrice)
                lowestPrice = table[row][col];
        }
    }
    return lowestPrice;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab7_3_price.exe
Please input the number of rows from 1 to 10
5
Please input the number of columns from 1 to 10
1
Enter price for row 1, column 1:45
Enter price for row 2, column 1:34
Enter price for row 3, column 1:23
Enter price for row 4
, column 1:56
Enter price for row 5, column 1:12
45.00
34.00
23.00
56.00
12.00
Highest Price: 56.00
Lowest Price: 12.00

Process finished with exit code 0
*/