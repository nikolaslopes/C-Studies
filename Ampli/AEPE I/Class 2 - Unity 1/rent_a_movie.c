#include <stdio.h>
#include <stdlib.h>

#define SIZE_CUSTOMER_NAME 100

struct customer {
  char name[SIZE_CUSTOMER_NAME];
  int age;
};

struct movie {
  int rating;
  int is_available;
};

int main(void) {
  struct customer new_customer;
  struct movie movie_verification;

  printf("\n Enter the customer name: ");

  fflush(stdin);
  fgets(new_customer.name, SIZE_CUSTOMER_NAME, stdin);

  printf("\n Enter the customer age: ");
  scanf("%d", &new_customer.age);

  printf("\n Enter the movie rating: ");
  scanf("%d", &movie_verification.rating);

  printf("\n Enter (0) if the movie is available or (1) otherwise\n");
  scanf("%d", &movie_verification.is_available);
  
  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  printf("\n Customer name: %s", new_customer.name);
  printf("\n Customer age: %d", new_customer.age);
  printf("\n Movie rating: %d", movie_verification.rating);
  printf("\n Movie available: %s", movie_verification.is_available ? "Is available" : "Is not available");
  printf("\n Movie can be rented by the customer: %d", (movie_verification.is_available) && (new_customer.age >= movie_verification.rating));
  printf("\n Difference in customer age and movie rating: %d", (new_customer.age < movie_verification.rating) * (movie_verification.rating - new_customer.age));

  return 0;
}