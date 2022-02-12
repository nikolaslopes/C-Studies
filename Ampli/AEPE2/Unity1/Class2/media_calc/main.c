#include <stdio.h>
#include <stdlib.h>

float t1, t2;

float calcMedia() {
  return (t1 + t2) / 2;
}

int main() {
  system("CLS");

  printf("\n Digite o valor da primeira temperatura: ");
  scanf("%f", &t1);

  printf("\n Digite o valor da segunda temperatura: ");
  scanf("%f", &t2);

  printf("\n A temperatura média é de %.2fº", calcMedia());

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}
