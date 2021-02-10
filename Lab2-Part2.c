#include <stdio.h>

int main() {

  char street[50], city[50], state[1];
  int place, zip;
  char choice;

  while (choice != 'n') {
    printf("Enter your street: ");
    scanf("%49s[\n]", street);
    while((getchar())!='\n');

    printf("Enter the house or apartment number: ");
    scanf("%d", &place);
    while((getchar())!='\n');

    printf("Enter the city: ");
    scanf("%49s[\n]", city);
    while((getchar())!='\n');

    printf("Enter the zipcode: ");
    scanf("%d[\n]", &zip);
    while((getchar())!='\n');

    printf("Enter the State: ");
    scanf("%49s[\n]", state);
    while((getchar())!='\n');

    printf("%d %s, %s, %s %d\n", place, street, city, state, zip);

    printf("Would you like to enter another address? (Enter y/n): \n");
    scanf("%s", &choice);
  }

  return 0;
}
