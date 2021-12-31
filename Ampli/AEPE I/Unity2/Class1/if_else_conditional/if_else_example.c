#include <stdio.h>
#include <stdlib.h>

int main() {
  int people1 = 0;
  int people2 = 0;

  printf("\n Enter the age of the first people: ");
  scanf("%d", &people1);

  printf("\n Enter the age of the second people: ");
  scanf("%d", &people2);

  if (people1 && people2 >= 18) {
    printf("\n The both are voters");
  } else {
    printf("\n The both are not voters");
  }
  
  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}