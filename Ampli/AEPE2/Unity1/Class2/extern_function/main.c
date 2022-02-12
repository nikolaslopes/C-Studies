#include <stdio.h>
#include <stdlib.h>

int x = 10;

int main() {
  system("CLS");

  int x = -1;

  int b;
  {
    extern int x;
    b = x;
  }

  printf("\n x value = %d", x);
  printf("\n b value (x global value) = %d", b);

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
  return 0;
}
