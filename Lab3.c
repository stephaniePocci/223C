#include <stdio.h>
// count lines, words, and characters in input
//line(nl) words(nw) characters(nc) read input until 'q' is entered
#define IN 1 //inside a words
#define OUT 0 //outside a word


int main()
{
int nl, nw, nc, state, i;
state = OUT;
nw = nc = 0;
nl = 1;
//char word[9];

int c;

printf("Enter a word or phrase (type q to quit): \n");

while((c = getchar()) != 'q')
{
  ++nc; //counting the amount of characters
  if(c=='\n')
  ++nl; //counting the number of lines
  if(c == ' ' || c == '\n' || c == '\t')
  state = OUT;
  else if(state==OUT)
  {
    state = IN;
    ++nw;
  }
}

for(i = 1; i <= nw; i++) {
  printf("%d: ", i);
  int newCount = 0;
  while(newCount <= nc) {
    printf("=");
    newCount++;
  }
  printf("\n");
}
//printf("%d, %d, %d\n", nl, nw, nc);

return 0;
}
