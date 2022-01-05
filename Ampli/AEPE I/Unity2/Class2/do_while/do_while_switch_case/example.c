#include <stdio.h>
#include <stdlib.h>

int main() {
  float saldo = 0;
  float valor;
  int option;
  
  system("CLS");

  do {
    printf("\n ***** M E N U   D E   O P Ç Õ E S *****\n\n");
    printf("\n (1) Depositar");
    printf("\n (2) Saque");
    printf("\n (3) Saldo");
    printf("\n (4) Sair");

    printf("\n\n Informe uma opção: ");
    scanf("%d", &option);

    switch(option) {
      case 1:
        system("CLS");
        printf("\n\n * Depositar *\n");
        printf("\n Informe o valor: ");
        scanf("%f", &valor);
        saldo += valor;

        printf("\n\n\n");
        system("PAUSE");
        system("CLS");
        break;
      case 2:
        system("CLS");
        printf("\n\n * Saque *\n");
        printf("\n Informe o valor: ");
        scanf("%f", &valor);

        if (saldo < valor) {
          printf("\n O valor do saque é menor que o seu saldo!");
        } else {
          saldo -= valor;
        }

        printf("\n\n\n");
        system("PAUSE");
        system("CLS");
        break;
      case 3:
        system("CLS");
        printf("\n\n * Saldo *\n");
        printf("\n Seu saldo: %.2f", saldo);

        printf("\n\n\n");
        system("PAUSE");
        system("CLS");
        break;
      case 4:
        system("CLS");
        printf("\n\n * Aperte qualquer tecla para sair *\n");

        printf("\n\n\n");
        system("PAUSE");
        system("CLS");
        break;
      default:
        printf("\n\n * Opção inválida *");

        printf("\n\n\n");
        system("PAUSE");
        system("CLS");
    } 
  } while (option != 4);

  printf("\n Obrigado por usar nosso sistema!");

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}