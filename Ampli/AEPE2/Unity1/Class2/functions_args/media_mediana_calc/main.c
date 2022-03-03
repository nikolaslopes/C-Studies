#include <stdio.h>
#include <stdlib.h>
#define VET_SIZE 8

float calcularMedia(float conjunto[], int size)
{
  float soma = 0.0, resultado = 0.0;

  for (int i = 0; i < size; i++)
  {
    soma += conjunto[i];
  }

  resultado = soma / size;
  return resultado;
}

float calcularMediana(float conjunto[], int size)
{
  float resultado = 0.0;

  if (size % 2 != 0)
  { // size é impar
    resultado = conjunto[size / 2];
  }
  else
  { // size é par
    resultado = (conjunto[size / 2] + conjunto[(size / 2) - 1]) / 2;
  }

  return resultado;
}

int main()
{
  system("CLS");

  float vet[VET_SIZE] = {1, 4, 4, 5, 6, 7, 7, 7};

  float media = calcularMedia(vet, VET_SIZE);
  printf("\nMédia = %.2f", media);

  float mediana = calcularMediana(vet, VET_SIZE);
  printf("\nMediana = %.2f", mediana);

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}
