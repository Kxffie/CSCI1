//
// Created by bryce on 4/23/2025.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>
using namespace std;

const int TEAM_SIZE = 5;
const int GAME_NUM  = 5;

// repeat a character n times
string repeat(char c, int n) {
    return string(n, c);
}

// center a string inside a field of width w
string centerText(const string& s, int w) {
    int len = s.length();
    if (len >= w) return s;
    int padL = (w - len) / 2;
    int padR = w - len - padL;
    return string(padL, ' ') + s + string(padR, ' ');
}

int main() {
    struct Team {
        int    rankNum;
        int    teamNum;
        string teamName;
        int    score[GAME_NUM];
        int    teamTotal;
        double teamAvg;
    };

    Team teamInfo[TEAM_SIZE];
    int overallTotal = 0;

    // read data
    ifstream in("teamPoints.txt");
    for (int i = 0; i < TEAM_SIZE; ++i) {
        in >> teamInfo[i].teamNum;
        getline(in >> ws, teamInfo[i].teamName);
        int sum = 0;
        for (int j = 0; j < GAME_NUM; ++j) {
            in >> teamInfo[i].score[j];
            sum += teamInfo[i].score[j];
        }
        teamInfo[i].teamTotal = sum;
        teamInfo[i].teamAvg   = double(sum) / GAME_NUM;
        overallTotal += sum;
    }
    in.close();

    // sort by descending average
    sort(teamInfo, teamInfo + TEAM_SIZE,
         [](auto& a, auto& b) { return a.teamAvg > b.teamAvg; });
    for (int i = 0; i < TEAM_SIZE; ++i)
        teamInfo[i].rankNum = i + 1;

    // column widths
    int w1 = 8;   // RANKING
    int w2 = 14;  // Team Name
    int w3 = 10;  // Team #
    int w4 = GAME_NUM * 4; // five scores, each width=4
    int w5 = 16;  // Total Points
    string avgH = "Average/Game";
    int w6 = avgH.length();
    string sep = "  ";

    int totalW = w1 + w2 + w3 + w4 + w5 + w6 + sep.length()*5;

    string title = "TEAM RANKING REPORT";
    int pad = (totalW - title.length()) / 2;
    cout << string(pad, ' ') << title << "\n\n";

	cout
	  << centerText("RANKING", w1)    << sep
	  << centerText("Team Name", w2)  << sep
	  << centerText("Team #", w3)     << sep
	  << centerText("Points", w4)     << sep
	  << centerText("Total Points", w5) << sep
	  << centerText("Average/Game", w6)
	  << "\n";

    cout
      << repeat('-', w1) << sep
      << repeat('-', w2) << sep
      << repeat('-', w3) << sep
      << repeat('-', w4) << sep
      << repeat('-', w5) << sep
      << repeat('-', w6)
      << "\n";

    // each team row
    for (int i = 0; i < TEAM_SIZE; ++i) {
        // format average to one decimal
        ostringstream os;
        os << fixed << setprecision(1) << teamInfo[i].teamAvg;
        string avgS = os.str();

        cout << left
             << setw(w1) << teamInfo[i].rankNum << sep
             << setw(w2) << teamInfo[i].teamName  << sep
             << centerText(to_string(teamInfo[i].teamNum), w3) << sep;

        // five game scores
        for (int j = 0; j < GAME_NUM; ++j)
            cout << centerText(to_string(teamInfo[i].score[j]), 4);

        cout << sep
             << centerText(to_string(teamInfo[i].teamTotal), w5) << sep
             << centerText(avgS, w6)
             << "\n";
    }

    {
        string dashLine;
        dashLine.reserve(totalW);
        for (int i = 0; i < totalW; ++i)
            dashLine += (i % 2 == 0 ? '-' : ' ');
        cout << dashLine << "\n";
    }

    // Totals line
    cout << left
         << setw(w1) << "Totals" << sep
         << setw(w2) << ""       << sep
         << setw(w3) << ""       << sep
         << setw(w4) << ""       << sep
         << centerText(to_string(overallTotal), w5)
         << "\n";

    return 0;
}


/*
C:\Users\bryce\CLionProjects\CSCI1\Exam2_Riordan.exe
TEAM RANKING REPORT

RANKING     Team Name       Team #           Points           Total Points    Average/Game
--------  --------------  ----------  --------------------  ----------------  ------------
1         Red Birds           5        41  37  35  33  35         181             36.2
2         Nets                1        25  36  24  31  42         158             31.6
3         Mavs                2        19  14  25  32  41         131             26.2
4         Blue Jays           3        31  22  12  30  28         123             24.6
5         Select              4        11  21  22  25  34         113             22.6
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Totals                                                            706

Process finished with exit code 0
*/