#include <stdio.h>
// count lines, words, and characters in input
//line(nl) words(nw) characters(nc) read input until 'q' is entered
#define IN 1 //inside a words
#define OUT 0 //outside a word


int main()
{
int nl, nw, nc, state;
state = IN;
nw = nc = 0;
nl = 1;
//char word[9];

int c, i, j;
int arrayCharCount[10] = {0, 0, 0, 0, 0, 0, 0 , 0, 0, 0};

printf("Enter a word or phrase (type q to quit): \n");

  while((c = getchar()) != 'q')
  {
    if((c != ' ' && c != '\n' && c != '\t')) {
      ++nc; //counting the amount of characters
  }
    if(c=='\n')
    ++nl; //counting the number of lines
    if(c == ' ' || c == '\n' || c == '\t'){
      state = OUT;
    } else if(state==OUT) {
      state = IN;
      nw++;
      nc = 0;
    }
    if(nw > 0) {
      arrayCharCount[nw] = nc + 1; //comp for getchar less than 1
    } else { arrayCharCount[nw] = nc; }
  }

for(i = 0; i < 10; i++) {
  printf("%d: ", (i+1));
  for(j = 0; j < arrayCharCount[i]; j++) {
    printf("=");
  }
  printf("\n");
}
/*
for(i = 1; i <= nw; i++) {
  printf("%d: ", i);
  int newCount = 0;
  while(newCount <= nc) {
    printf("=");
    newCount++;
  }
  printf("\n");
}
*/
//printf("%d, %d, %d\n", nl, nw, nc);

return 0;
}
