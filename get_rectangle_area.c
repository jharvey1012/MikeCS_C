#include <stdio.h> // This is required for every c program. Allows the user to read input/oupt

int main() {
  // Reserve space for width
  float width;
  // Reserve space for the height
  float height;

  // Get the width from the user, store it in the width variable
  printf("Please enter the width: ");
  scanf("%f",&width);

  // Get the height from the user, store it in the height variable
  printf("Please enter the height: ");
  scanf("%f",&height);

  // Multiple the width by the height
  float area = width * height;

  // Print it
  printf("Area is: %f \n", area);
}