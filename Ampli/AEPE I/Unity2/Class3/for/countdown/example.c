#include <stdio.h>
#include <stdlib.h>

int main() {
  int counter;

  system("CLS");

  printf("\n Enter a number to countdown: ");
  scanf("%d", &counter);

  for (counter; counter >= 1; counter--) {
    printf("\n %d", counter);
  }

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}