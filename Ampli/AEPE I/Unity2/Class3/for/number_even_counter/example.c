#include <stdio.h>
#include<stdlib.h>

int main() {
  int y;

  system("CLS");

  printf("\n ***** NUMBER COUNTER *****");
  printf("\n\n 0 to 20");
  
  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  for (y = 0; y <=20; y+=2) {
    printf("\n y = %d", y);
  }

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}