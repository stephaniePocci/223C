#include <stdio.h>

int main() {

  char street[50], city[50], state[1];
  int place, zip;

  printf("Enter your street: ");
  scanf("%49s[\n]", street);
  while((getchar())!='\n');

  printf("Enter the house or apartment number: ");
  scanf("%d", &place);
  while((getchar())!='\n');
  return 0;
}
