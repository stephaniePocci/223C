#include <stdio.h>
#include <string.h>
#define MAXLINE 1000 //max input line length
  /* searched term - "ould"
  Ah Love! could you and I with fate conspire
  To grasp this sorry scheme of things entire
  would not we shatter it to bits
  re-mould it nearer to the heart's desire!
  */
char pattern[] = "ould"; //term to search for

// getline get a line store it in s - return the size of the read line
int getline2(char s[], int lim)
{
  int c, i; //c is char , i is the counters
  for(i = 0; i < lim-1 && (c = getchar()) != '\n'; ++i)
  {
    s[i] = c;//write char to s
    //input - hello\n
    //s[] = hello\0
  }
  s[i] ='\0'; //append the null terminator
  return i;   //return the size
}

//function will search the input array for the term array
//if we find the term, return the first index of the term within the array
//if we dont find the term return -1 flag
int strindex(char s[], char t[]) {//s input, t term
  int i, j, k;

  for(i = strlen(s)-1; s[i] != '\0'; i--) {//search the array and keeps our place!
    for(j = i, k = strlen(t); t[k] !=0 && s[j] == t[k]; j-- , k--);//j searches where we are starting with i in s, k searches t
   //search for a match!!!
    if(t[k] == 0) {
      return j + 1;
    } //if we found a match
  }
  return -1;
}


int main()
{
  char line[MAXLINE];
  int counter = 0;

  while(getline2(line,MAXLINE) > 0) { //keep reading lines until empty line is entered
    ++counter;
    if(strindex(line,pattern) >= 0) {//returns -1 if there is no match
      printf("%s\n", line);
      printf("The right most index for the line %s is %i.\n", line, strindex(line,pattern));
    }
    printf("%s\n", line);
  }

  return 0;
}
