#include <stdio.h>
#include <stdlib.h>

int test() {
  int x = 10;

  return x;
}

int main () {
  system("CLS");

  int x = 20;

  printf("\n X value in function main() = %d", x);
  printf("\n X value in test() function = %d", test());

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
  return 0;
}
