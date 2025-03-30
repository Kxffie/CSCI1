//
// Created by bryce on 3/4/2025.
//

#include "cardstuff.h"
#include <iostream>
#include <string>
using namespace std;

string getSuitName(int suitNum) {
	string suits[] = {"Spades", "Clubs", "Diamonds", "Hearts"};
	if (suitNum >= 0 && suitNum < 4)
		return suits[suitNum];
	return "Unknown Suit";
}

void suitTester() {
	for (int i = 0; i < 4; i++) {
		cout << "Suit " << i << ": " << getSuitName(i) << endl;
	}
}

string getRankName(int rankNum) {
	string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
	if (rankNum >= 0 && rankNum < 13)
		return ranks[rankNum];
	return "Unknown Rank";
}

void rankTester() {
	for (int i = 0; i < 13; i++) {
		cout << "Rank " << i << ": " << getRankName(i) << endl;
	}
}

string deck[52];

void initializeDeck() {
	int index = 0;
	for (int suit = 0; suit < 4; suit++) {
		for (int rank = 0; rank < 13; rank++) {
			deck[index++] = getRankName(rank) + " of " + getSuitName(suit);
		}
	}
}

void deckTester() {
	initializeDeck();
	for (int i = 0; i < 52; i++) {
		cout << deck[i] << endl;
	}
}

int main() {
	cout << "Suit Tester:" << endl;
	suitTester();

	cout << "\nRank Tester:" << endl;
	rankTester();

	cout << "\nDeck Tester:" << endl;
	deckTester();

	return 0;
}
