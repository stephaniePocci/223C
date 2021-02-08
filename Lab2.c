#include <stdio.h>

int main()
{
  char c;

  //scanf("%c", &c);
  //printf("The char entered is: %c\n", c);

  char s[20];
  printf("Enter the string: \n");
  scanf("%s", s); //arrays are always passed by reference!!! & is not needed
  printf("The entered string is: %s \n", s);
  //after reading string data but before char data we must clear the buffer!
  while((getchar())!='\n');  //fflush(stdin)

  scanf("%c", &c);
  printf("The char entered is %c\n", c);

  char str[20];
  int i;
  for(i = 0; i<2; i++) {
    scanf("%[^\n]s", str); //not ignoring white space! reading until \n
    printf("%s\n", str);
    while((getchar()) != '\n'); //same as cin.ignore()
  }

//fgets

/*
  int a, b, c;
  printf("Enter the value of a \n");
  scanf("%d", &a); //pass a by reference!
  printf("%d", a);

  scanf("%d", &b);
  scanf("%d", &c);
  printf("%d %d", b, c);

*/
  //char c;
  //c = getchar(); //reads a single char from input and stores it in c
  //prinf
  //putchar(c); //output a single char to the screen

  //pseudo code
  //read a char
  //while (character is not q)
  //output a character
  //read another character

//ascii

  int n;
  n = getchar();
  while(n != 'q')
  {
    putchar(n);
    n = getchar();
  }


  return 0;
}
