//
// Created by bryce on 4/16/2025.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct Drink {
    string name;
    double cost;
    int quantity;
};

int main() {
    vector<Drink> drinks = {
        { "Coke",   2.00, 16 },
        { "Sprite", 1.50, 10 },
        { "Water",  1.00, 20 }
    };

    cout << left
         << setw(4)  << "No."
         << setw(20) << "Drink Name"
         << setw(12) << "Cost"
         << setw(12) << "Quantity"
         << "\n------------------------------------------------\n";
    for (size_t i = 0; i < drinks.size(); ++i) {
        cout << setw(4)  << (i + 1)
             << setw(20) << drinks[i].name
             << "$" << setw(10) << fixed << setprecision(2) << drinks[i].cost
             << setw(12) << drinks[i].quantity
             << "\n";
    }
    cout << "------------------------------------------------\n\n";

    double money = 0.0;
    cout << "Insert money (in dollars): $";
    cin  >> money;

    int choice = 0;
    while (true) {
        cout << "Select drink number (or 0 to cancel): ";
        cin  >> choice;
        if (choice == 0) {
            cout << "Transaction canceled. Returning $" << fixed << setprecision(2) << money << "\n";
            return 0;
        }
        if (choice < 1 || choice > static_cast<int>(drinks.size())) {
            cout << "Invalid selection. Try again.\n";
        } else if (drinks[choice - 1].quantity == 0) {
            cout << "Sorry, " << drinks[choice - 1].name << " is out of stock.\n";
        } else {
            break;
        }
    }

    Drink &sel = drinks[choice - 1];

    while (money < sel.cost) {
        double needed = sel.cost - money;
        cout << "Need $" << fixed << setprecision(2) << needed
             << " more. Insert additional amount (or 0 to cancel): $";
        double extra;
        cin  >> extra;
        if (extra <= 0.0) {
            cout << "Transaction canceled. Returning $" << fixed << setprecision(2) << money << "\n";
            return 0;
        }
        money += extra;
    }

    sel.quantity--;
    cout << "Dispensing " << sel.name << "...\n";

    double change = money - sel.cost;
    if (change > 0.0) {
        cout << "Returning change: $" << fixed << setprecision(2) << change << "\n";
    }

    cout << "Thank you!\n";
    return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\op2.exe
No. Drink Name          Cost        Quantity
------------------------------------------------
1   Coke                $2.00      16
2   Sprite              $1.50      10
3   Water               $1.00      20
------------------------------------------------

Insert money (in dollars): $10
Select drink number (or 0 to cancel):2
Dispensing Sprite...
Returning change: $8.50
Thank you!

Process finished with exit code 0
*/