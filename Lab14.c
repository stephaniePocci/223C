#include <stdio.h>
#define DEBUG 1

int main() {
  int base, height, area;

  #if DEBUG == 0
  base = 2;
  height = 3;

  #elif DEBUG == 1
  printf("What is the base of the triangle?\n");
  scanf("%d", &base);
  printf("What is the height of the triangle?\n");
  scanf("%d", &height);

  #endif

  area = (base * height)/2;
  printf("The area of the triangle is: %d\n", area);
  return 0;
}
