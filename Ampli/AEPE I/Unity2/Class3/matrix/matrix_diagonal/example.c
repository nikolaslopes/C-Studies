#include <stdio.h>
#include <stdlib.h>

int main() {
  system("CLS");

  int linha, coluna;
  int matriz[3][3];

  int matriz_diagonal = 1;

  for (linha = 0; linha < 3; linha++) {
    for (coluna = 0; coluna < 3; coluna++) {
      printf("\n Digitar os valores da matriz para [linha %d, coluna %d]: ", linha + 1, coluna + 1);
      scanf("%d", &matriz[linha][coluna]);
    }

    system("CLS");
  }

  system("CLS");

  for (linha = 0; linha < 3; linha++) {
    for (coluna = 0; coluna < 3; coluna++) {
      if (coluna != linha && matriz[linha][coluna] != 0) {
        matriz_diagonal = 0;
      }
    }
  }

  printf("\n ***** MATRIZ *****\n\n");

  for (linha = 0; linha < 3; linha++) {
    for (coluna = 0; coluna < 3; coluna++) {
      printf("%d\t", matriz[linha][coluna]);
    }
    printf("\n");
  }

  if (matriz_diagonal == 1) {
    printf("\n\n Sua matriz é diagonal!");
  } else {
    printf("\n\n Sua matriz não é diagonal!");
  }

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
  return 0;
}
