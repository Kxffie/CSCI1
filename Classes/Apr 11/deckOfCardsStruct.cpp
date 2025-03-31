//
// Created by bryce on 3/31/2025.
//

/*
Create a struct Card which represents a playing card with a suit and value.
In the main program, create a vector of Cards called Deck.  Create a function to initialize your deck and another to draw a card.
Create a function that prints out the card name, and then demonstrate the draw() function in main.
vector<Card> initializeDeck();
Card draw( vector<Card> &deck );
void printCard( Card card);
 */

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Card {
    string suit;
    string value;
};

vector<Card> initializeDeck();

Card draw( vector<Card> &deck );

void printCard( Card card);

int main() {
	vector<Card> deck = initializeDeck();
	Card card = draw(deck);
	printCard(card);
	return 0;
}

vector<Card> initializeDeck() {
	vector<Card> deck;
	string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
	string values[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10",
						"Jack", "Queen", "King", "Ace"};
	for (string suit : suits) {
		for (string value : values) {
			Card card;
			card.suit = suit;
			card.value = value;
			deck.push_back(card);
		}
	}
	return deck;
}

Card draw( vector<Card> &deck ) {
	srand(time(nullptr));
	int index = rand() % deck.size();
	Card card = deck[index];
	deck.erase(deck.begin() + index);
	return card;
}

void printCard( Card card) {
	cout << card.value << " of " << card.suit << endl;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\deckOfCardsStruct.exe
7 of Spades

Process finished with exit code 0

C:\Users\bryce\CLionProjects\CSCI1\deckOfCardsStruct.exe
2 of Diamonds

Process finished with exit code 0

C:\Users\bryce\CLionProjects\CSCI1\deckOfCardsStruct.exe
6 of Clubs

Process finished with exit code 0
*/