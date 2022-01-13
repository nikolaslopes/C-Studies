#include <stdio.h>

int* gerarRandomico() {

  static int vetor[10];
  int i;

  for (i = 0; i < 10; i++) {
    vetor[i] = rand() % 100;
    printf("\n vetor[%d] = %d", i, vetor[i]);
  }
  return vetor;
}

int main() {

  int *ponteiro_para_vetor;
  int j;

  ponteiro_para_vetor = gerarRandomico();

  for (j = 0; j < 10; j++) {
    printf("\n ponteiro[%d] = %d", j, ponteiro_para_vetor[j]);
  }

  return 0;
}
