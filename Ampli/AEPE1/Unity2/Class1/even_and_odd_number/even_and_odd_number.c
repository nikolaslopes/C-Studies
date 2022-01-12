#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 0;

  printf("\n Enter some number: ");
  scanf("%d", &x);

  system("CLS");

  printf("\n X = %d", x);

  if(x % 2 == 0) {
    printf("\n X is a even number");
  } else {
    printf("\n X is a odd number");
  }

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}