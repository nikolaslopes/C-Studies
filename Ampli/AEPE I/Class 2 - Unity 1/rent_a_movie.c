#include <stdio.h>
#include <stdlib.h>

#define SIZE_CUSTOMER_NAME 100

struct customer {
  char name[SIZE_CUSTOMER_NAME];
  int age;
};

int main(void) {
  struct customer new_customer;
  int movie_rating;

  printf("\n Enter the customer name: ");

  fflush(stdin);
  fgets(new_customer.name, SIZE_CUSTOMER_NAME, stdin);

  printf("\n Enter the customer age: ");
  scanf("%d", &new_customer.age);

  printf("\n Enter the movie rating: ");
  scanf("%d", &movie_rating);
  
  system("cls");

  printf("\nCustomer name: %s", new_customer.name);
  printf("\nCustomer age: %d", new_customer.age);
  printf("\nMovie rating: %d", movie_rating);

  return 0;
}