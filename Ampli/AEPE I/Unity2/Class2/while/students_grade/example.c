#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char stop;
  float grade;

  system("PAUSE");
  system("CLS");

  printf("\n Enter the student's final grade: ");
  scanf("%f", &grade);

  while (grade < 0 || grade > 10) {
    system("CLS");
    printf("\n Invalid grade! Please enter the student's final grade: ");
    scanf("%f", &grade);
    system("CLS");
  }
  
  printf("\n Student's final grade: %.2f", grade);

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}