//
// Created by bryce on 3/12/2025.
//

#include "tictactoe.h"
#include <iostream>
using namespace std;

void printBoard(char board[][3], int rows) {
 for (int i = 0; i < rows; i++) {
  for (int j = 0; j < 3; j++) {
   cout << board[i][j] << " ";
  }
  cout << endl;
 }
}

void resetBoard(char board[][3]) {
 char counter = '1';
 for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
   board[i][j] = counter++;
  }
 }
}

int main() {
 char board[3][3];
 char playAgain;

 do {
  resetBoard(board);
  int moves = 0;
  char currentPlayer = 'X';
  bool gameQuit = false;

  while (moves < 9) {
   printBoard(board, 3);
   int cell;
   cout << "Enter a cell number to mark (or 0 to quit the game): ";
   cin >> cell;
   if (cell == 0) {
    gameQuit = true;
    break;
   }
   if (cell < 1 || cell > 9) {
    cout << "Invalid cell number. Try again." << endl;
    continue;
   }

   int row = (cell - 1) / 3;
   int col = (cell - 1) % 3;
   if (board[row][col] == 'X' || board[row][col] == 'O') {
    cout << "Cell already marked. Choose another." << endl;
    continue;
   }

   board[row][col] = currentPlayer;
   moves++;

   currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
  }

  printBoard(board, 3);
  if (gameQuit) {
   cout << "Game ended by user." << endl;
  } else {
   cout << "Game over." << endl;
  }

  cout << "Play again? (Y/N): ";
  cin >> playAgain;

 } while (playAgain == 'Y' || playAgain == 'y');

 return 0;
}
