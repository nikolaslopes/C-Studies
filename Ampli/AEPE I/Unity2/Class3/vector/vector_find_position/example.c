#include <stdio.h>
#include <stdlib.h>

#define VECTOR_SIZE 5

int main() {
  int vector[VECTOR_SIZE];
  int number = 0, i  = 0, found_number = 0, option = 0;

  system("CLS");

  for (i = 0; i < VECTOR_SIZE; i++) {
    printf("\n Enter a number: ");
    scanf("%d", &vector[i]);
  }

  system("CLS");

  do {
    printf("\n ***** READ ME *****\n");
    printf("\n (1) - Find number operation\n (2) - Exit");
    printf("\n\n Enter one option: ");
    scanf("%d", &option);

    switch (option) {
      case 1:
        system("CLS");

        printf("\n Enter the number that you want to find: ");
        scanf("%d", &number);

        system("CLS");

        while (i < VECTOR_SIZE) {
          if (vector[i] == number) {
            found_number = 1;

            break;
          } 
          i ++;
        }

        printf("\n Vector [");
        for (i = 0; i < VECTOR_SIZE; i++) {
          printf(" { %d: %d}, ", i, vector[i]);
        }
        printf("]");

        if (found_number == 1) {
          printf("\n\n The number %d was found on vector's position %d", number, i);
        } else {
          printf("\n The number %d was not found on vector", number);
        }

        printf("\n\n\n");
        system("PAUSE");
        system("CLS");
        break;

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