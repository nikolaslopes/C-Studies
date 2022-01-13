#include <stdio.h>

float calculate() {
  float num;
  printf("\n Enter a number: ");
  scanf("%f", &num);

  return num * num;
}

int main() {
  float result = 0;

  system("CLS");
  result = calculate();

  printf("\n The square of the number is %.2f", result);

  return 0;
}
