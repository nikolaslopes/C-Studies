#include <stdio.h>
#include <stdlib.h>

void inserir(int a[])
{
  int i = 0;

  for (i = 0; i < 3; i++)
  {
    printf("\nDigite o valor %d: ", i);
    scanf("%d", &a[i]);
  }
}

void imprimir(int b[])
{
  int i = 0;

  for (i = 0; i < 3; i++)
  {
    printf("\nVetor[%d] = %d", i, 2 * b[i]);
  }
}

int main()
{
  system("CLS");

  int numbers[3];

  printf("\nPreenchendo o vetor...");
  inserir(numbers);

  printf("\nDobro dos valores informados: ");
  imprimir(numbers);

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}
