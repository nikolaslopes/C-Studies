#include <stdio.h>
#include <stdlib.h>

int* alocar() {
  int *memoria = (int*) malloc(sizeof(int));
  return memoria;
}

int main() {
  int *num = alocar();
  if (num != NULL) {
    printf("\n Informe um número inteiro: ");
    scanf("%d", &num);
    printf("\n Número informado: %d", num);
  }

  return 0;
}
