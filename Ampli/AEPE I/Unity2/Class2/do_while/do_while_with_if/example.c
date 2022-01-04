#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float grade = 0;

  system("PAUSE");
  system("CLS");

  do {
    printf("\n Enter the student's final grade (min: 0, max: 10): ");
    scanf("%f", &grade);

		if (grade < 0 || grade > 10) {
      printf("\n Nota inválida!");

      printf("\n\n\n");
		  system("PAUSE");
      system("CLS");
		}
    
    system("CLS");
  } while (grade < 0 || grade > 10);

  printf("\n Student's final grade: %.2f", grade);

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}