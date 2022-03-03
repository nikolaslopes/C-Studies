#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 5, y = 10, z = 5;

  printf("\n 1 = true\n 0 = false\n");
  printf("\n\n ((%d == %d) && (%d == %d)) = %d", x, y, x, z, ((x == y) && (x == z)));
  printf("\n\n ((%d == %d) || (%d == %d)) = %d", x, y, x, z, ((x == y) || (x == z)));
  printf("\n\n !((%d == %d) || (%d == %d)) = %d", x, y, x, z, !((x == y) || (x == z)));

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
}