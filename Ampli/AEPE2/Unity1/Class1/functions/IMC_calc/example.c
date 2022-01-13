#include <stdio.h>
#include <stdlib.h>

float calcularIMC() {
  float peso, altura, imc;

  printf("\n Informe seu peso (em Kg): ");
  scanf("%f", &peso);

  printf("\n Informe sua altura (em metros): ");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  return imc;
}

int main() {
  float imc = calcularIMC();

  system("CLS");

  if (imc < 18.5) {
    printf("\n IMC = %.2f\n Situação: Abaixo do peso!", imc);
  } else if (imc < 24.9) {
    printf("\n IMC = %.2f\n Situação: Peso ideal!", imc);
  } else {
    printf("\n IMC = %.2f\n Situação: Sobrepeso!", imc);
  }

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
  return 0;
}
