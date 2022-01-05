#include <stdio.h>
#include <stdlib.h>

int main() {
  float soma = 0;
  float valor;
  int option;
  
  system("CLS");

  do {
    printf("\n M E N U   D E   O P Ç Õ E S");
    printf("\n (1) Depositar");
    printf("\n (2) Saque");
    printf("\n (3) Saldo");
    printf("\n (4) Sair");

    printf("\n\n Informe uma opção: ");
    scanf("%f", &option);
  } while (option != 4);

  system("CLS");


  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}