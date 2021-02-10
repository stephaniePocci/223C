#include <stdio.h>

int main() {
  float sales1 = 0;
  float sales2 = 0;
  float sales3 = 0;
  float totalSales = 0;
  int i = 0;
  int count = 3;

  printf("Enter the sales for day 1: \n");
  scanf("%f", &sales1);
  printf("Enter the sales for day 2: \n");
  scanf("%f", &sales2);
  printf("Enter the sales for day 3: \n");
  scanf("%f", &sales3);

  totalSales = sales1 + sales2 + sales3;

  printf("\n");
  printf("Sales Amounts\n");
  printf("--------------------------\n");
  printf("Day 1:              %6.2f\n", sales1);
  printf("Day 2:              %6.2f\n", sales2);
  printf("Day 3:              %6.2f\n", sales3);
  printf("Total:              %6.2f\n", totalSales);

  //scanf("")
return 0;
}
