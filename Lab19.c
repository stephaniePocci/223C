#include <stdio.h>

/*
Write function ptinrect tests whether a point structure is inside a rectangle structure.

Write function rectPerimeter that that returns the perimeter of a rectangle structure

Write function rectArea that that returns the area of a rectangle structure
*/

typedef struct point {
int x;
int y;
} point;

typedef struct rect {
   point bottomLeft; //bottom left point coordinate
   point topRight; //top right point coordinate
} rect;

void ptinrect(struct point point, struct rect rect) { //if the point is in the rectangle
  if(point.x > rect.bottomLeft.x && point.x < rect.topRight.x && point.y > rect.bottomLeft.y && point.y < rect.topRight.y) {
    printf("The point is inside the rectangle.\n");
  } else {
    printf("The point is not inside the rectangle.\n");
  }
}

void rectPerimeter(struct point point, struct rect rect) { //find the perimeter of the rect
  int perimeter;
  perimeter = 2 * (rect.bottomLeft.x + rect.bottomLeft.y);
  printf("The perimeter of the rectangle is: %d\n", perimeter);
}

void rectArea(struct point point, struct rect rect) { //find the area of the rect
  int area;
  area = rect.bottomLeft.x * rect.bottomLeft.y;
  printf("The area of the rectangle is: %d\n", area);
}

int main() {
  struct point point = {20,30}; //point inside the rect
  struct rect rect = {{10,20}, {30,40}}; //bottom left and top right coordinates of the rect

  ptinrect(point, rect);
  rectPerimeter(point, rect);
  rectArea(point, rect);
  return 0;
}
