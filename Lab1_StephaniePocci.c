#include <stdio.h>
#define LOWER 0 //define our lower limit
#define UPPER 300 //define our upper limit
#define STEPP 20 //define our step
//program that converts from Fahrenheit to Celsius
//0, 20, 40 ... 300
int main()
{
  float fahr, celsius;
  fahr = 0;
  celsius = 0;
  celsius = LOWER;
  int i = 0;

  printf("Conversion Table: Celsius to Fahrenheit\n");
  printf("---------------------------------------\n");

  for(i = 0; i <= UPPER; ++i){
    //celsius = 5.0 * (fahr-32.0) / 9.0;
    fahr = celsius * (9.0/5.0) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius += STEPP;
  }
/*
  while(celsius <= UPPER)
  {
    //converting from fahreneit to celsius
    celsius = 5.0 * (fahr-32.0) / 9.0;
    fahr = celsius * (9.0/5.0) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr); //%d assumes base 10
    //3.0f - print at least 3 characters wide with no decimal
    //6.1f - print at least 6 characters wide with 1 digit after the decimal

    //increase our tempature by 20
    celsius = celsius + STEPP;
  }
*/

  return 0;
}
//%f for float
//%d for print
//%i
