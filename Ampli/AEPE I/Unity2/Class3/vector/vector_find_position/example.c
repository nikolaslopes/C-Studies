#include <stdio.h>
#include <stdlib.h>

#define VECTOR_SIZE 5

int main() {
  int vector[VECTOR_SIZE];
  int num, i  = 0, found = 0, option = 0;

  system("CLS");

  for (i = 0; i < VECTOR_SIZE; i++) {
    printf("\n Enter a number: ");
    scanf("%d", &vector[i]);
  }

  system("CLS");

  do {
    printf("\n ***** READ ME *****;");
    printf("\n (1) - Find number operation\n (2) - Exit");
    printf("\n\n Enter one option: ");
    scanf("%d", &option);

    switch (option) {
      case 1:
        printf("");

      case 2:
        system("CLS");
        printf("\n Enter any keyboard key to exit!");

        printf("\n\n\n");
        system("PAUSE");
        system("CLS");
        break;

      default:
        printf("\n You chose an invalid option");

        printf("\n\n\n");
        system("PAUSE");
        system("CLS");
    }

  } while (option != 2);

  printf("\n Thanks for using our system :)");

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
  return 0;
}