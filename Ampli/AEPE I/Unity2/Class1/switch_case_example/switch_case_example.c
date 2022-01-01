#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 0;

  printf("\n (1) for Karate\n (2) for Muay Thai\n (3) for Boxe\n (4) for Jiu-jitsu");

  printf("\n\n Enter the modality you want to practice: ");
  scanf("%d", &x);

  system("CLS");

  switch (x) {
    case 1: 
      printf("\n You chose Karate");
      break;

    case 2:
      printf("\n You chose Muay thai");
      break;

    case 3:
      printf("\n You chose Boxe");
      break;
    
    case 4:
      printf("\n You chose Jiu-jitsu");

    default:
      printf("\n You chose an invalid option");
  }

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
  return 0;
}