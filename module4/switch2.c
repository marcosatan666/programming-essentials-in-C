//Write a program that asks the user to enter the number of a month, and prints the number of days before this month since the start of the year.
//When the number does not correspond to a month (less than 1 or greater than 12), the program prints: Error: no such month in my calendar..
//Use only switch for computing the sum of the days (don't use any loops).
//You don't have to check whether or not the year is a leap year - assume it is a leap year.

#include <stdio.h>

int main()
{
	int  i, m=0;
    scanf("%d",&i);
    
	switch(i) {
        case 12: m+=30; 
        case 11: m+=31; 
        case 10: m+=30; 
        case 9: m+=31; 
        case 8: m+=31;
        case 7: m+=30;
        case 6: m+=31;
        case 5: m+=30;
        case 4: m+=31;
        case 3: m+=29; 
        case 2: m+=31; 
        case 1: printf("There are %d days before the given month.",m); break;
        default: puts("Error: no such month in my calendar.");
    }
	return 0;
}
