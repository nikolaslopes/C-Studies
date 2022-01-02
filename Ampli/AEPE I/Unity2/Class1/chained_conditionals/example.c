#include <stdio.h>
#include <stdlib.h>

int main() {
  float student_grade = 0;

  printf("\n Enter the student's final grade: ");
  scanf("%f", &student_grade);

  if (student_grade >= 60) {
    printf("\n The student is approved");
  } else {
    if (student_grade >= 50) {
      printf("\n The student is in recovery");
    } else {
        printf("\n The student is disapproving");
    }
  }

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  return 0;
}