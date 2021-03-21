#include <stdio.h>
#include <string.h>
/*
Instructions:
Write a program that simulates Tic-Tac-Toe
- Assume all normal vals
- If all spaces are fileld and no player has a match the game results in "Cats Game"
- Space cannot be selected if it is occupied

Start by using a 2D array of chars
Initialize array to char of "blank space"
- will make assignment easier

P1 & P2 should use same code
*/
char array[3][3];//Declaring 2D array for new game

void gameBoard() {
  printf("%ct | %ct | %ct", array[0][0], &array[0][1], &array[0][2]);
}

int main() {

printf("Welcome to Tic-Tac-Toe\n");
printf("======================\n");
int playerTurn;

  return 0;

  gameBoard();
}
