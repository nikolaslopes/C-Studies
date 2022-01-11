#include <stdio.h>

int main() {
  system("CLS");

  for (int i = 1; i <= 30; i++) {
    if (i % 2 == 0) {
      continue;
    }
    printf("\n %d", i);
  }

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
}
