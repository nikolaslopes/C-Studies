#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NAME_SIZE 30

int main() {
  system("CLS");

  char name[NAME_SIZE];
  int i;

  printf("\n Enter the student's name: ");
  fflush(stdin);
  fgets(name, NAME_SIZE, stdin);

  for (int i  = 0; i < NAME_SIZE; i++) {
    name[i] = toupper(name[i]);
  }

  printf("\n Name after change: %s", name);

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
  return 0;
}
