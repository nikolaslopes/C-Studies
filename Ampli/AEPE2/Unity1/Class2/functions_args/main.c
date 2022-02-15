#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b) {
  return a + b;
}

int main() {
  system("CLS");

  int result;
  result = sum(2, 2);

  printf("\n Sum result = %d", result);

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}
