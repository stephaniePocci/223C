#include <stdio.h>
#include <string.h>

int atoi(char s[]) { //will convert string/char to int
  int i,n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
    n = 10 * n + (s[i] - '0');
  }
  return n;
}

int main(int argc, char *argv[]) {
  printf("Please enter the expression:\n");
  scanf("%s", &argv[]);
  char isValid = 'y';
  // y - is valid
  // n - not valid
  char operator = 'n';
  // a - addition
  // s - subtraction
  // n - no operator
  int sum = atoi(argv[1]); //sum of expression
  // first num

  for(int i = 1; i < argc; i++) {
    //len should be even (ex. 2 + 2 vs 2 +)
    if(argc % 2 != 0) {
      isValid = 'n';
      break;
    }
    // checks if operators are at valid positions
    if(strcmp("+", argv[i]) == 0 || strcmp("-", argv[i]) == 0) {
      if(i % 2 == 0) {
        isValid = 'y';
      } else {
        isValid = 'n';
        break;
      }
    } else {
      if(i % 2 == 0) {
        isValid = 'n';
        break;
      }
    }
  }

  //if the expression is not valid
  if(isValid == 'n') {
    printf("Expression is invalid.\n");
    return 0;
  } else if(isValid == 'y') { //if the expression is valid
    for(int i = 2; i < argc; i++) {
      if(strcmp("+", argv[i]) == 0) {
        operator = 'a'; //set to addition
      } else if(strcmp("-", argv[i]) == 0) {
        operator = 's'; //set to subtraction
      }

      //checks if there is an operator
      if(operator == 'n') {
        switch(operator) {
          case 'a': //ADDITION
            sum += atoi(argv[i+1]);
            break;
          case 's': //SUBTRACTION
            sum -= atoi(argv[i+1]);
            break;
        }
      }
    }
    printf("The evaluated expression is: %d\n", sum);
  }

  // printf("Please enter your expression:\n");
  // scanf("%s", argv);
  // argc = atoi(argv);
  // printf("%d", argc);
  return 0;
}
