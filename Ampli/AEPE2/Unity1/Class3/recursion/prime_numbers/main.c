#include <stdio.h>
#include <stdlib.h>

int primeNumber(int n)
{
  return primeNumberAux(n, 2);
}

int primeNumberAux(int n, int x)
{
  if ((x == n) || (n == 1))
  {
    return 1;
  }
  else if (n % x == 0)
  {
    return 0;
  }
  else
  {
    return primeNumberAux(n, x + 1);
  }
}

int main()
{
  system("CLS");
  int n = 0, resultado = 0;

  printf("\nDigite um número inteiro positivo: ");
  scanf("%d", &n);

  resultado = primeNumber(n);

  if (resultado == 1)
  {
    printf("\nO número %d é primo", n);
  }
  else
  {
    printf("\nO número %d não é primo", n);
  }

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
  return 0;
}
