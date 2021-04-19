#include <stdio.h>

//argc # of arguments
// ./lecture timmy kimmy jimmy
//argc = 4
//argv[] 2d array, holds strings

int main(int argc, char *argv[]) {

  int i;
  //         0     1     2     3
  // ./lecture timmy kimmy jimmy
  for(i = 1; i < argc; i++)
  printf("%s\n", argv[i]);

  while(--argc > 0)
  printf("%s\n", *++argv);

  //hello world
  //sudo cc -o name name.c

  //(*++argv)[0] == '-';
  //argv[0][0] == '-';

  for(i = 1; i < argc; i++) {
    printf("%s\n", argv[i]);

    int c; //stores the char
    c = argv[i][0]; //look at the 1st index of each word

    switch(c) {
      case 'h':
      printf("Case H!\n");
      break;
      case 'w':
      printf("Case W!\n");
      break;
      default:
      printf("illegal value %c", c);
      argc = 0; //if invalid data then quit loop
      break;
    }

    return 0;
  }
}
