#include <stdio.h>

int main() {
  int x = 0;
  int y = 0;
  int result = 0;

  printf("\n Enter the X value: ");
  scanf("%d", &x);

  printf("\n Enter the Y value: ");
  scanf("%d", &y);
  
  result = x + y;
  printf("\n %d + %d = %d", x, y, result);

  result = x - y;
  printf("\n %d - %d = %d", x, y, result);

  result = x / y;
  printf("\n %d / %d = %d", x, y, result);
  
  result = x * y;
  printf("\n %d * %d = %d", x, y, result);

  result = x % y;
  printf("\n %d %% %d = %d", x, y, result);

  return 0;
}