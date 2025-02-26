#include <iostream>
#include <string>
using namespace std;

int main() {
 string suit;

 for (int i = 1; i <= 4; ++i) {
  switch(i) {
   case 1:
    suit = "Spades";
   break;
   case 2:
    suit = "Clubs";
   break;
   case 3:
    suit = "Diamonds";
   break;
   case 4:
    suit = "Hearts";
   break;
   default:
    suit = "Unknown";
   break;
  }

  cout << "Suit " << i << ": " << suit << endl;
 }

 return 0;
}
