//Write a program that computes and prints whether or not a given year is a leap year.
//A leap year is a year that is exactly (without a remainder) divisible by four, 
//except for years that are exactly divisible by 100, but these years are leap years if they are exactly divisible by 400.

#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}
