#include <stdio.h>
#include <stdlib.h>

int fatorialCauda(int n)
{
  return fatorialAux(n, 1);
}

int fatorialAux(int n, int parcial)
{
  if (n != 1)
  {
    return fatorialAux(n - 1, parcial * n);
  }
  else
  {
    return parcial;
  }

  // with n = 4 -> (1º 3 e 4) - (2ª 2 e 12) - (3º 1 e 24)
}

int main()
{
  system("CLS");

  int n, resultado;

  printf("\nDigite um número inteiro positivo: ");
  scanf("%d", &n);

  resultado = fatorialCauda(n);

  printf("\nResultado do fatorial = %d", resultado);

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
  return 0;
}
