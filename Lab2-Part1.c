#include <stdio.h>

int main() {
  float sales1 = 0;
  float sales2 = 0;
  float sales3 = 0;
  int i = 0;
  int count = 3;

  printf("Enter the sales for day 1: \n");
  scanf("%f", &sales1);
  printf("Enter the sales for day 2: \n");
  scanf("%f", &sales2);
  printf("Enter the sales for day 3: \n");
  scanf("%f", &sales3);

  printf("\n");
  printf("Sales Amounts\n");
  printf("--------------------------\n");
  printf("Day 1:%6.2f\n", sales1);

  //scanf("")
return 0;
}
