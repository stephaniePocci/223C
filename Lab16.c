#include <stdio.h>

//declaring functions
float recPrismVol(float length, float height, float width) {
  float volume;
  volume = length * height * width;
  return volume;
}

float pyrVol(float length, float height, float width) {
  float volume;
  volume = length * height * width * 1/3;
  return volume;
}

float ellipVol(float length, float height, float width) {
  float volume;
  volume = length * height * width * 3.14 * 4/3;
  return volume;
}

int main() {

  float length = 0;
  float height = 0;
  float width = 0;
  float volume = 0; //final volume
  int choice = 0; //which shape

  //pointer function array
  float(*volFunc[3]) (float, float, float) = {recPrismVol, pyrVol, ellipVol};
  //declaring 
  volFunc[0] = recPrismVol;
  volFunc[1] = pyrVol;
  volFunc[2] = ellipVol;

  printf("Which shape would you like to find the volume of?\n");
  printf("1 - Rectangular Prism\n");
  printf("2 - Pyramid\n");
  printf("3 - Ellipsoid\n");
  scanf("%d", &choice);
  printf("Enter the length, height, and width of the shape (separated by spaces in that order):\n");
  scanf("%f %f %f", &length, &height, &width);

  if(choice == 1) {
    volume = volFunc[0](length, height, width); //calling recPrismVol
    printf("The volume of the Rectangular Prism is %.2f\n", volume);
  } else if(choice == 2) {
    volume = volFunc[1](length, height, width); //calling pyrVol
    printf("The volume of the Pyramid is %.2f\n", volume);
  } else if(choice == 3) {
    volume = volFunc[2](length, height, width); //calling ellipVol
    printf("The volume of the Ellipsoid %.2f\n", volume);
  }
  /* Write a program using function pointers that allows the user to enter Length, Width and Height. Allow the user to select which geometrical shape to find the volume of with the given parameters. For full credit use an array of function pointers.

Volume of Rectangular Prism Given Length, Width & Height baseArea = W x L
V = baseArea x H

Volume of a Pyramid Given BaseLength, BaseWidth & Height baseArea = W x L
V = baseArea x H x 1⁄3

Volume of an Ellipsoid Given Length Width & Height V = 4/3 x 3.14 x Length, Width, Height
*/
  return 0;
}
