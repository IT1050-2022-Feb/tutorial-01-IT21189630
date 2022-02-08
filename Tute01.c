/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
#define subjectCount 2

int main() {
  float marks [subjectCount] = {0};
  int counter;
  float sum=0 , average=0;

  for (counter=0; counter<subjectCount; counter++)
  {
    printf("Enter the marks for subject %d: ",counter+1);
    scanf("%f",&marks[counter]);
    sum += marks[counter];
  }

  average = sum / subjectCount;

  printf("--------------------------------\n");
  printf("Total Marks Of Two subjects: %.2f\n",sum);
  printf("Average Of The Two Marks: %.2f\n",average);
  printf("--------------------------------\n");
  return 0;
}

