#include <stdio.h>
#include <stdlib.h>

int main() {
  int quantidade_notas = 0, option;
  float nota, media, soma_notas = 0.0;

  system("CLS");

  do {
    printf("\n Digite a nota do aluno %d: ", quantidade_notas + 1);
    scanf("%f", &nota);

    quantidade_notas += 1;
    soma_notas += nota;

    printf("\n\n Digite (1) para informar outra nota ou (2) para encerrar: ");
    scanf("%d", &option);

    if (option == 1) {
      printf("\n\n\n");
      system("PAUSE");
      system("CLS");
    }

  } while (option != 2);

  printf("\n Quantidade  de alunos: %d", quantidade_notas);
  
  media = soma_notas / (float) quantidade_notas;

  printf("\n\n Média das notas: %.2f", media);

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}