#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

  printf("\n 0 = the same strings are equal\n -1 = the first string is less than the second\n 1 = the first string is greater than the second\n");

  printf("\n ARARA == ARARA? %d", strcmp("ARARA", "ARARA"));
  printf("\n ARARA == BANANA? %d", strcmp("ARARA", "BANANA"));
  printf("\n BANANA == ARARA? %d", strcmp("BANANA", "ARARA"));

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
}