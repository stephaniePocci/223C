#include <stdio.h>

int main() {
  const int maxInput = 100;
  int i;
  double number, average, sum = 0.0;
  for(i = 1; i <= maxInput; ++i) { //loop to enter 100 numbers
    printf("%d. Enter a number: ", i);
    scanf("%lf", &number);
  if(number >= 0) {
    sum += number;
  } else if(number < 0.0) {
    average = sum / (i-1);
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);
    break;
  }
}
  return 0;
}
