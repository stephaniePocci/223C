#include <stdio.h>

int atoi(char s[]) {
  int i,n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
    n = 10 * n + (s[i] - '0');
  }
  return n;
}

int main() {
  char argv[20];
  int argc;

  printf("Please enter your expression:\n");
  scanf("%s", argv);
  argc = atoi(argv);
  printf("%d", argc);
  return 0;
}
