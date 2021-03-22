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

void displayPlayerTurn(int playerTurn) {
  if(playerTurn == 1) {
    printf("Player %d turn 'X'\n", playerTurn);
  } else if(playerTurn == 2) {
    printf("Player %d turn 'O'\n", playerTurn);
  }
}

//function to display current board
void display() {
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("%c", arr[i][j]);
      if(j != 2) {
        printf("|");
      }
    }
    printf("\n");
    if(i != 2) {
      for(int j = 0; j < 5; j++) {
        printf("-");
      }
      printf("\n");
    }
  }

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

//checks each col to see if there is a matching row/column
int checkWin() {
  int winStat = 0;
  //check for a win in any row
  for(int i = 0; i < 3; i++) {
    if(arr[i][0]!= ' ' && arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2]) {
      return 1;
    }
  }
  //check for a win in any col
  for(int i = 0; i < 3; i++) {
    if(arr[0][i] != ' ' && arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i]) {
      return 1;
    }
  }
  //check to see if there is a diagonal win
  if(arr[0][0] != ' ' && arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2]) {
    return 1;
  }
  if(arr[0][2] != ' ' && arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0]) {
    return 1;
  }
  return winStat;
}


int main() {
  int playerTurn = 1;
  int row, col;
  int inputs = 0;
  int winStat = 0;

  printf("Welcome to Tic-Tac-Toe\n");
  printf("======================\n");
  displayPlayerTurn(playerTurn);
  display(); //displays current board

  while(checkWin() != 1 || winStat != 1) {
    playerMove(row, col, playerTurn);
    inputs++;
    winStat = checkWin();
    if(inputs == 9) {
      printf("Cat's Game!\n");
      display(playerTurn);
      break;
    }
    playerTurn = changeTurn(playerTurn);
    displayPlayerTurn(playerTurn);
    display();
  }

playerTurn = changeTurn(playerTurn);
  if(playerTurn == 1) {
    printf("X Player Wins!\n");
    display();
  } else if(playerTurn == 2) {
    printf("O Player Wins!\n");
    display();
  }

  return 0;
}
