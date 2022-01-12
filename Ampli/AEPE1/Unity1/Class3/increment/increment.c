#include <stdio.h>

int main(void) {
  int x = 0;
  int y = 0;
  
  int incremented_before_execution = ++x;
  int incremented_after_execution = y++;
  
  printf("\n X Value incremented before the first execution: X = %d", incremented_before_execution);

  printf("\n");

  printf("\n Y Value: Y = %d", incremented_after_execution);
  printf("\n Y value incremented after the first execution: Y = %d", y);

  return 0;
}