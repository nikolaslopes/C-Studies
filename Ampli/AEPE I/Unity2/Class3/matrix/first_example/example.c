#include <stdio.h>
#include <stdlib.h>

int main() {
  system("CLS");

  int linha, coluna;
  int matriz[3][3];

  for (linha = 0; linha < 3; linha++) {
    for (coluna = 0; coluna < 3; coluna++) {
      printf("\n Digite os valores da matriz para [linha %d, coluna %d]: ", linha + 1, coluna + 1);
      scanf("%d", &matriz[linha][coluna]);
    }
  }

  system("CLS");

  printf("\n ***** MATRIZ *****\n\n");
  for (linha = 0; linha <= 2; linha++) {
    for (coluna = 0; coluna < 3; coluna++) {
      printf("%d\t", matriz[linha][coluna]);
    }
    printf("\n");
  }

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
  return 0;
}
