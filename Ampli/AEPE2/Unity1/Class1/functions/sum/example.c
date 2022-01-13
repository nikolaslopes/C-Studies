#include <stdio.h>
#include <stdlib.h>

int sum() {
  return 2 + 3;
}

int main() {
  int result = 0;

  result = sum();

  system("CLS");
  printf("\n The function return is = %d", result);

  return 0;
}
