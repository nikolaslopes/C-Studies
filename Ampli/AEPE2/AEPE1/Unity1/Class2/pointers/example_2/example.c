#include <stdio.h>

int main() {
  int idade = 20;
  int *ponteiro_para_idade = &idade;

  printf("\n Conteúdo da variável: %d", idade);
  printf("\n Conteúdo da variável pelo ponteiro: %d", *ponteiro_para_idade);

  printf("\n\n Endereço da variável apontando sem ponteiro: %p", &idade);
  printf("\n Endereço da variável sendo apontado pelo ponteiro: %p", ponteiro_para_idade);

  printf("\n\n Endereço do próprio ponteiro: %p", &ponteiro_para_idade);

  return 0;
}
