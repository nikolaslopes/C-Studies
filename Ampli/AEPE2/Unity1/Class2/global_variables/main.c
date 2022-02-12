#include <stdio.h>
#include <stdlib.h>

int x = 10;

void test() {
  x = 2 * x;
}

int main() {
  system("CLS");

  printf("\n X global value = %d", x);

  test();

  printf("\n X global value changed in test() function = %d", x);

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}
