//
// Created by bryce on 3/12/2025.
//

#include "gasprice.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

struct GasPrice {
    string month;
    double price;
};

int main() {
    ifstream input("prices.txt");
    if (!input) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    vector<GasPrice> prices;
    string month;
    double price;

    while (input >> month >> price) {
        prices.push_back({month, price});
    }

    if (prices.empty()) {
        cerr << "No data found." << endl;
        return 1;
    }

    int lowIndex = 0, highIndex = 0;
    for (size_t i = 1; i < prices.size(); i++) {
        if (prices[i].price < prices[lowIndex].price) {
            lowIndex = i;
        }
        if (prices[i].price > prices[highIndex].price) {
            highIndex = i;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Lowest price: " << prices[lowIndex].price
         << " (Week " << (lowIndex + 1) << ", " << prices[lowIndex].month << ")" << endl;
    cout << "Highest price: " << prices[highIndex].price
         << " (Week " << (highIndex + 1) << ", " << prices[highIndex].month << ")" << endl;

    map<string, pair<double, int>> monthlyData;
    for (const auto &entry : prices) {
        monthlyData[entry.month].first += entry.price;
        monthlyData[entry.month].second++;
    }

    cout << "\nMonthly averages:" << endl;
    for (const auto &data : monthlyData) {
        double average = data.second.first / data.second.second;
        cout << data.first << ": " << average << endl;
    }

    return 0;
}
