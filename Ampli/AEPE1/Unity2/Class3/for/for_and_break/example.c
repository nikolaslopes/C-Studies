#include <stdio.h>
#include <stdlib.h>

int main() {
  int stop_number = 20;

  system("CLS");

  for (int i = 0; i < 100; i++) {
    if (i == stop_number) {
      break;
    }
    printf("\n %d", i+1);
  }

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}