//
// Created by bryce on 4/12/2025.
//

#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int main() {
    int variant;
    cout << "Select variant:" << endl;
    cout << "  1: Original (uses toupper for validation)" << endl;
    cout << "  2: Without inner validation loop" << endl;
    cout << "  3: Using tolower for validation" << endl;
    cout << "Enter variant (1-3): ";
    cin >> variant;

    int week, total, dollars;
    float average;
    char choice;
    cout << showpoint << fixed << setprecision(2);

    if (variant == 1) {
        do {
            total = 0;
            for (week = 1; week <= 4; week++) {
                cout << "How much did you spend on food during week " << week << "?" << endl;
                cin >> dollars;
                total += dollars;
            }
            average = total / 4.0;
            cout << "Your weekly food bill over the month is $" << average << endl << endl;
            do {
                cout << "Would you like to calculate for another month? (Enter Y or N):" << endl;
                cin >> choice;
            } while (toupper(choice) != 'Y' && toupper(choice) != 'N');
        } while (toupper(choice) == 'Y');
    }
    else if (variant == 2) {
        do {
            total = 0;
            for (week = 1; week <= 4; week++) {
                cout << "How much did you spend on food during week " << week << "?" << endl;
                cin >> dollars;
                total += dollars;
            }
            average = total / 4.0;
            cout << "Your weekly food bill over the month is $" << average << endl << endl;

            cout << "Would you like to calculate for another month? (Enter Y or N):" << endl;
            cin >> choice;
        } while (toupper(choice) == 'Y');
    }
    else if (variant == 3) {
        do {
            total = 0;
            for (week = 1; week <= 4; week++) {
                cout << "How much did you spend on food during week " << week << "?" << endl;
                cin >> dollars;
                total += dollars;
            }
            average = total / 4.0;
            cout << "Your weekly food bill over the month is $" << average << endl << endl;
            do {
                cout << "Would you like to calculate for another month? (Enter y or n):" << endl;
                cin >> choice;
            } while (tolower(choice) != 'y' && tolower(choice) != 'n');
        } while (tolower(choice) == 'y');
    }
    else {
        cout << "Invalid variant selection." << endl;
        return 1;
    }
    return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab10_2_case_convert.exe
Select variant:
1: Original (uses toupper for validation)
2: Without inner validation loop
3: Using tolower for validation
Enter variant (1-3):1
How much did you spend on food during week 1?
10
How much did you spend on food during week 2?
20
How much did you spend on food during week 3?
20
How much did you spend on food during week 4?
25
Your weekly food bill over the month is $18.75

Would you like to calculate for another month? (Enter Y or N):
n

Process finished with exit code 0

C:\Users\bryce\CLionProjects\CSCI1\lab10_2_case_convert.exe
Select variant:
  1: Original (uses toupper for validation)
  2: Without inner validation loop
  3: Using tolower for validation
Enter variant (1-3):2
 How much did you spend on food during week 1?
10
How much did you spend on food during week 2?
20
How much did you spend on food during week 3?
20
How much did you spend on food during week 4?
25
Your weekly food bill over the month is $18.75

Would you like to calculate for another month? (Enter Y or N):
n

Process finished with exit code 0

C:\Users\bryce\CLionProjects\CSCI1\lab10_2_case_convert.exe
Select variant:
  1: Original (uses toupper for validation)
  2: Without inner validation loop
  3: Using tolower for validation
Enter variant (1-3):3
 How much did you spend on food during week 1?
20
How much did you spend on food during week 2?
20
How much did you spend on food during week 3?
10
How much did you spend on food during week 4?
15
Your weekly food bill over the month is $16.25

Would you like to calculate for another month? (Enter y or n):
n

Process finished with exit code 0
*/