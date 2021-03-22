#include <stdio.h>
#include <string.h>
char arr[3][3] = {' ',' ',' ',' ',' ',' ',' ',' ',' '}; //Declaring 2D array for new game, init to empty
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

//initialize gameplayer board
// void createBoard() {
//   char arr[3][3] = {{'X',' ',' '},{' ',' ',' '},{' ',' ',' '}}; //Declaring 2D array for new game
// }


//function to display current board
void display(int playerTurn) {
  if(playerTurn == 1) {
    printf("Player %d turn 'X'\n", playerTurn);
  } else if(playerTurn == 2) {
    printf("Player %d turn 'O'\n", playerTurn);
  }
  fflush(stdout);
  printf("%s|%s|%s\n", &arr[0][0], &arr[0][1], &arr[0][2]);
  printf("-------------\n");
  printf("%s|%s|%s\n", &arr[1][0], &arr[1][1], &arr[1][2]);
  printf("-------------\n");
  printf("%s|%s|%s\n", &arr[2][0], &arr[2][1], &arr[2][2]);

}

//changes the turn to the next player
int changeTurn(int playerTurn) {
  if(playerTurn == 1) {
    playerTurn = 2;
  } else if(playerTurn == 2) {
    playerTurn = 1;
  }
  return playerTurn;
}

//asks for the player's move
//checks if the place is already taken
//pseudo boolean function, (1 = illegal/ 2 = not illegal)
char playerMove(int row, int col, int playerTurn) {
  do {
    printf("Which Row would you like?\n");
    scanf("%d", &row);
    printf("Which Col would you like?\n");
    scanf("%d", &col);
    if(arr[row][col] != ' ') { //if the space is already taken
      printf("Illegal Move\n");
    }
  } while(arr[row][col] != ' ');

  if(playerTurn == 1) {
    arr[row][col] = 'X';
  } else if(playerTurn == 2) {
    arr[row][col] = 'O';
  }
}


//checks if there is a winner for the game
// 1 = there is a winner/ 2 = no winner yet
int winCheck(int playerTurn) {
  int bool = 2;
  return bool;
}


int main() {
  int playerTurn = 1;
  int row, col;
  int bool = 0;

  printf("Welcome to Tic-Tac-Toe\n");
  printf("======================\n");
  display(playerTurn); //displays current board

    playerMove(row, col, playerTurn);
    playerTurn = changeTurn(playerTurn);
    display(playerTurn);
//  }
  return 0;
}
