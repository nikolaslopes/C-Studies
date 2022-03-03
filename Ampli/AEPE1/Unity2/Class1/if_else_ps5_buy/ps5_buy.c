#include <stdio.h>
#include <stdlib.h>

int main() {
  int ps5_price = 5500;
  int my_money = 0;

  printf("\n Enter the amount of your saved money: ");
  scanf("%d", &my_money);

  system("CLS");

  printf("\n The PS5 price is: %d", ps5_price);
  printf("\n Your saved money: %d \n", my_money);

  if (my_money >= ps5_price) {
    printf("\n :D :D :D");
    printf("\n You can buy the PS5");
  } else {
    printf("\n :( :( :(");
    printf("\n You don't have the necessary money to buy the PS5");
  }

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
  return 0;
}