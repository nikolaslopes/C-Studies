#include <stdio.h>
#include <stdlib.h>

int somar(int valor)
{
  if (valor == 0)
  {
    // critério de parada
    return valor;
  }
  else
  {
    // chamada recursiva
    return valor + somar(valor - 1);
  }
}

int main()
{
  system("CLS");
  int n, resultado;

  printf("\nDigite um número inteiro positivo: ");
  scanf("%d", &n);

  resultado = somar(n); // primeira chamada da função

  printf("\nResultado = %d", resultado);

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
  return 0;
}
