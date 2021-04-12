#include <stdio.h>

int main() {
  int length; // length
  int width; // width
  int area; // area
  int *lenPtr; // int pointer which will be set to point to the length
  int *widPtr; // int pointer which will be set to poibt to the width

  
  printf("Please input the length of the rectangle\n");
  scanf("%d", &length);
  printf("Please input the width of the rectangle\n");
  scanf("%d", &width);
  lenPtr = &length; // lenptr points to length (holds the address)
  widPtr = &width; // widptr points to width (holds the address)
  area = *lenPtr * (*widPtr); // find area by using only pointer variables
  printf("The area is %d\n", area);
  if(length > *widPtr) { //condition length > width using variables
    printf("The length is greater than the width\n");
  } else if(width > *lenPtr) { // condition width > length by usng only variables
    printf("The width is greater than the length\n");
  } else {
    printf("The width and length are the same\n");
  }

  return 0;
}
