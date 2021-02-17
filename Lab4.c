#include <stdio.h>

int main() {
  int i;
  unsigned long int fibonacciNum, sum = 0;
  unsigned long int num2 = 1;
  unsigned long int num1 = 1;
  printf("Please enter the number of elements to be generated: \n");
  scanf("%ld", &fibonacciNum);
  printf("The first %ld elements of the Fibonacci sequence are: \n", fibonacciNum);

  for(i = 1; i <= fibonacciNum; ++i) {
    printf("%ld ", num1);
    sum = num1 + num2;
    num1 = num2;
    num2 = sum;
  }
  return 0;
}
