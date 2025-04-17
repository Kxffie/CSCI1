//
// Created by bryce on 4/17/2025.
//

#include <iostream>
#include <string>
using namespace std;

struct Weather {
    double totalRainfall;
    double highTemp;
    double lowTemp;
    double avgTemp;
};

int main() {
    const int MONTHS = 12;
    Weather data[MONTHS];
    string monthNames[MONTHS] = {
        "January", "February", "March",    "April",
        "May",     "June",     "July",     "August",
        "September","October", "November", "December"
    };

    for (int i = 0; i < MONTHS; ++i) {
        cout << "Enter data for " << monthNames[i] << ":\n";
        cout << "  Total rainfall: ";
        cin  >> data[i].totalRainfall;
        cout << "  High temp:      ";
        cin  >> data[i].highTemp;
        cout << "  Low temp:       ";
        cin  >> data[i].lowTemp;
        cout << "  Avg temp:       ";
        cin  >> data[i].avgTemp;
        cout << "\n";
    }

    double totalRain = 0.0;
    double sumAvgTemp = 0.0;
    double highestTemp = data[0].highTemp;
    double lowestTemp  = data[0].lowTemp;
    int    hiMonth     = 0;
    int    loMonth     = 0;

    for (int i = 0; i < MONTHS; ++i) {
        totalRain    += data[i].totalRainfall;
        sumAvgTemp   += data[i].avgTemp;
        if (data[i].highTemp > highestTemp) {
            highestTemp = data[i].highTemp;
            hiMonth     = i;
        }
        if (data[i].lowTemp < lowestTemp) {
            lowestTemp = data[i].lowTemp;
            loMonth    = i;
        }
    }

    double avgMonthlyRain = totalRain / MONTHS;
    double avgYearTemp    = sumAvgTemp / MONTHS;

    cout << "Yearly weather summary:\n";
    cout << "  Total rainfall:        " << totalRain << "\n";
    cout << "  Avg monthly rainfall:  " << avgMonthlyRain << "\n";
    cout << "  Avg temperature (year):" << avgYearTemp << "\n";
    cout << "  Highest temp:          " << highestTemp
         << " (" << monthNames[hiMonth] << ")\n";
    cout << "  Lowest temp:           " << lowestTemp
         << " (" << monthNames[loMonth] << ")\n";

    return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\opt.exe
Enter data for January:
Total rainfall:10
High temp:10
Low temp:10
Avg temp:10

Enter data for February:
Total rainfall:10
High temp:10
Low temp:10
Avg temp:10

Enter data for March:
Total rainfall:10
High temp:10
Low temp:10
Avg temp:10

Enter data for April:
Total rainfall:10
High temp:10
Low temp:10
Avg temp:10

Enter data for May:
Total rainfall:10
High temp:10
Low temp:10
Avg temp:10

Enter data for June:
Total rainfall:10
High temp:10
Low temp:10
Avg temp:10

Enter data for July:
Total rainfall:10
High temp:10
Low temp:10
Avg temp:10

Enter data for August:
Total rainfall:10
High temp:10
Low temp:10
Avg temp:10

Enter data for September:
Total rainfall:10
High temp:10
Low temp:10
Avg temp:10

Enter data for October:
Total rainfall:10
High temp:10
Low temp:10
Avg temp:10

Enter data for November:
Total rainfall:10
High temp:10
Low temp:10
Avg temp:10

Enter data for December:
Total rainfall:10
High temp:10
Low temp:10
Avg temp:10

Yearly weather summary:
Total rainfall:        120
Avg monthly rainfall:  10
Avg temperature (year):10
Highest temp:          10 (January)
Lowest temp:           10 (January)

Process finished with exit code 0
*/