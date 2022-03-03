#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x = 0;
  int y = 0;

  printf("\n Enter the X value: ");
  scanf("%d", &x);

  printf("\n Enter de Y value: ");
  scanf("%d", &y);

  system("CLS");

  printf("\n 1 = true\n 0 = false\n");

  printf("\n %d and %d are the same number? %d", x, y, x == y);
  printf("\n %d is greater than %d? %d", x, y, x > y);
  printf("\n %d is less than %d? %d", x, y, x < y);
  printf("\n %d is less or equal to %d? %d\n\n\n", x, y, x <= y);

  system("PAUSE");
  system("CLS");
}