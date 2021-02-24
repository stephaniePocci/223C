#include <stdio.h>
/*
Directions:
Part 2 - Make a function to copy one array into another
Part 1 - Feel free to use getline function with copy function &
Write a program that reads 3 lines of input, and prints the longest line
*/
int main() {
  char buffer[32];
  char buffer2[32];
  char buffer3[32];
  char *buff = buffer;
  char *buff2 = buffer2;
  char *buff3 = buffer3;
  size_t buffSize = 32;
  size_t array1, array2, array3;

  printf("Please enter your 1st line \n");
  array1 = getline(&buff, &buffSize, stdin);

  printf("Please enter your 2nd line \n");
  array2 = getline(&buff2, &buffSize, stdin);

  printf("Please enter your 3rd line \n");
  array3 = getline(&buff3, &buffSize, stdin);

  if(array1 > array2 && array1 > array3) {
    strcopy2(char buffer[]);
  }

  if(array2 > array3 && array2 > array1) {
    strcopy2(char buffer2[]);
  }

  if(array3 > array2 && array3 > array1) {
    strcopy2(char buffer3[]);
  }

  return 0;
}

void strcopy2(char bufferOriginal[], char bufferBiggest[]) {
  int i = 0;
  int buffSize = 32;
//   int j = 0;
  for(i = 0; i < buffSize; i++) {
    bufferBiggest[i] = bufferOriginal[i];
  }
  printf("The largest line is: %s", bufferBiggest);
/*  while(bufferOriginal[i] != '\0'){
    i++;
  }
  while((bufferOriginal[i++] = bufferBiggest[j++]) != '\0');
*/
}
