#include <stdio.h>

int check(int num) {
  if(num % 2 == 0 ) {       // if # is divisble by 2
    num += 2;               // add 2 to num
  } else if(num % 2 != 0) { // if # is not divisble by 2
    num -= 1;               // subtract 1 from num
  }
  return num;
}

int main() {
  int num = 0;
  scanf("%d", &num); //takes # from user
  printf("%d\n", check(num)); //check if num is %2
  return 0;
}
