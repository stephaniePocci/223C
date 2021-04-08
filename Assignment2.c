#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

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
  FILE * fpointer = fopen("sample1.txt","r"); //creates file, or opens it if already created

  //main menu
  restart:
  printf("Which Token would you like to search the file for?\n");
  printf("  1. Food\n");
  printf("  2. Colors\n");
  printf("  3. People\n");
  scanf("%d", &choice);

  if(choice == 1) { //choice = food
    printf("Displaying Food\n");
    char token[] = "Food:";
    while(fgets(search, MAXLINE, fpointer) != NULL) { //fgets reads line frome the text files and stores into str "search"
      if(strindex(search, token) >= 0) {
        printf("%s\n", search);
      }
    }
  } else if(choice == 2) { //choice = colors
    printf("Displaying Colors\n");
    char token[] = "Colors:";
    while(fgets(search, MAXLINE, fpointer) != NULL) { //fgets reads line frome the text files and stores into str "search"
      if(strindex(search, token) >= 0) {
        printf("%s\n", search);
      }
    }
  } else if(choice == 3) { //choice = people
    printf("Displaying People\n");
    char token[] = "People:";
    while(fgets(search, MAXLINE, fpointer) != NULL) { //fgets reads line frome the text files and stores into str "search"
      if(strindex(search, token) >= 0) {
        printf("%s\n", search);
      }
    }
  } else {
    printf("Invalid Token choice.\n");
    goto restart;
  }

  fclose(fpointer);
  return 0;
}
