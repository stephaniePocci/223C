#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

// getline get a line store it in s - return the size of the read line
int getline2(char s[], int lim) {
  int c, i; //c is char , i is the counters
  for(i = 0; i < lim-1 && (c = getchar()) != '\n'; ++i) {
    s[i] = c;//write char to s
    //input - hello\n
    //s[] = hello\0
  }
  s[i] ='\0'; //append the null terminator
  return i; //return the size
}
//function will search the input array for the term array
//if we find the term, return the first index of the term within the array
//if we dont find the term return -1 flag
int strindex(char s[], char t[]) { //s input, t term
  int i, j, k;

  for(i = 0; s[i] != '\0'; i++) //search the array and keeps our place!
  {
    for(j = i, k = 0; t[k] !='\0' && s[j] == t[k]; j++ , k++)//j searches where we are starting with i in s, k searches t
    ; //search for a match!!!
    if( k > 0 && t[k] == '\0') //if we found a match
    return i;
  }

  return -1;
}


int main() {
  char search[MAXLINE]; // ??
  int choice = 0; // choice from the menu (Token)
  FILE * fpointer = fopen("sample1.txt","w"); //creates file, or opens it if already created

  //main menu
  restart:
  printf("Which Token would you like to search the file for?\n");
  printf("  1. Food\n");
  printf("  2. Colors\n");
  printf("  3. People\n");
  scanf("%d", &choice);

  if(choice == 1) { //choice = food
    printf("Displaying Food\n");
    char pattern[] = "Food:";
  } else if(choice == 2) { //choice = colors
    printf("Displaying Colors\n");
    char pattern[] = "Colors:\n";
  } else if(choice == 3) { //choice = people
    printf("Displaying People\n");
    char pattern[] = "People:\n";
  } else {
    printf("Invalid Token choice.\n");
    goto restart;
  }

  fclose(fpointer);
  return 0;
}
