#include <stdio.h>
#include <stdlib.h>

void test(int *n1, int *n2)
{
  *n1 = -1;
  *n2 = -2;

  printf("\n\nValores dentro da função test():");
  printf("\nn1 = %d e n2 = %d", *n1, *n2);
}

int main()
{
  system("CLS");

  int n1 = 10;
  int n2 = 20;

  printf("\nValores antes de chamar a função test():");
  printf("\nn1 = %d e n2 = %d", n1, n2);

  test(&n1, &n2);

  printf("\n\nEndereço n1 = %d \nEndereço n2 = %d", &n1, &n2);

  printf("\n\nValores depois de chamar a função test():");
  printf("\nn1 = %d e n2 = %d", n1, n2);

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}
