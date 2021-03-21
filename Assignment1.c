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

//initialize gameplayer board
// void createBoard() {
//   char arr[3][3] = {{'X',' ',' '},{' ',' ',' '},{' ',' ',' '}}; //Declaring 2D array for new game
// }


//function to display current board
void display(int playerTurn, char arr[3][3]) {
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

//checks if the place is already taken
//pseudo boolean function, (1 = illegal/ 2 = not illegal)
int illegalMove(char arr[3][3], int row, int col){
  int bool;
  if(arr[row][col] == 'X') {
    bool = 1;
  } else if(arr[row][col] == 'O') {
    bool = 1;
  } else {
    bool = 0;
  }
  return bool;
}

int main() {
  int playerTurn = 1;
  int row,col;

  char arr[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}}; //Declaring 2D array for new game, init to empty
  printf("Welcome to Tic-Tac-Toe\n");
  printf("======================\n");
  display(playerTurn, arr); //displays current board

  printf("Which Row would you like?\n");
  scanf("%d", &row);
  printf("Which Col would you like?\n");
  scanf("%d", &col);

  if(illegalMove(arr, row, col) != 1) { //checks first if spot is already taken
    if(playerTurn == 1) {
      arr[row][col] = 'X';
    } else if(playerTurn == 2) {
      arr[row][col] = 'O';
    }
  } else {
    printf("Illegal Move.");
  }
  // arr = playerMove(playerTurn, arr, row, col);
  playerTurn = changeTurn(playerTurn);
  display(playerTurn, arr);

  return 0;
}
