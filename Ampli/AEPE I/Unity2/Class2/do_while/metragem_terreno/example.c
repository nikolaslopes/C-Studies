#include <stdio.h>
#include <stdlib.h>

int main() {  

  float metragem1 = 0, metragem2 = 0, resultado = 0;
  int resposta;
  
  system("PAUSE");
  system("CLS");

  printf("\n C Á L C U L O   D E   M E T R O S   Q U A D R A D O S");

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  do {
    printf("\n Digite a primeira metragem do terreno: ");
    scanf("%f", &metragem1);

    printf("\n Digite a segunda metragem do terreno: ");
    scanf("%f", &metragem2);

    resultado = metragem1 * metragem2;

    printf("\n O terreno tem %.2f metros quadrados", resultado);
    
    printf("\n\n Digite (1) para continuar ou (2) para sair: ");
    scanf("%d", &resposta);
    
    system("CLS");
  } while (resposta == 1);

  printf("\n **** O B R I G A D O ****");

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
  return 0;
}