/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1,mark2;
   float average;
   int sum=0;; //get input
   printf("enter marks 1 : ");//ask sub marks
   scanf("%d",&mark1);
   printf("enter marks 2 : ");//ask sub marks
   scanf("%d",&mark2);
   
   sum=mark1+mark2;
   average=sum/2.0;
   
   printf("average: %.2f ",average);
   
   
   
   
  return 0;
}

