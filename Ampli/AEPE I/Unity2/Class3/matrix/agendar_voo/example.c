#include <stdio.h>
#include <stdlib.h>

int main() {
  system("CLS");

  int matrix[3][5] = {
    1, 1, 1, 0, -1,
    1, 1, 1, 1, 1,
    0, 0, -1, -1, -1
  };

  int option ;
  int num_flight;
  int reserved;

  do {
    printf("\n ***** B E M   V I N D O   A   N I X   A I R *****\n\n");
    printf("\n (1) - Reservar voo\n (2) - Sair\n\n Informe a opção desejada: ");
    scanf("%d", &option);

    switch(option) {
      case 1:
        system("CLS");
        printf("\n Informe o número do voo (1 a 3): ");
        scanf("%d", &num_flight);

        reserved = 0;

        if (num_flight >= 1 && num_flight <= 3) {
          for (int i = 0; i < 5; i++) {
            if (matrix[num_flight - 1][i] == 0) {
              reserved = 1;
              matrix[num_flight - 1][i] == 1;
            }
          }
        }

      case 2:
        printf("\n\n\n");
        system("PAUSE");
        system("CLS");
        break;

      default:
        printf("\n Opção inválida!\n\n\n");
        system("PAUSE");
        system("CLS");
    }

  } while (option != 2);

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
  return 0;
}
