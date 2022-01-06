#include <stdio.h>
#include <stdlib.h>

#define VECTOR_SIZE 5

int main() {
  int num[VECTOR_SIZE];

  system("CLS");

    for (int i = 0; i < VECTOR_SIZE; i++) {
      printf("\n Enter a number: ");
      scanf("%d", &num[i]);
      printf("\n\n O valor digitado foi: %d", num[i]);

      printf("\n\n\n");
      system("PAUSE");
      system("CLS");
    }

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}