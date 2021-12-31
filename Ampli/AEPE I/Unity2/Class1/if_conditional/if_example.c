#include <stdio.h>
#include <stdlib.h>

int main() {
  int age = 0;

  printf("\n Enter your age: ");
  scanf("%d", &age);

  if (age >= 18) {
    printf("\n You already can take your driver's license");
  }

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}