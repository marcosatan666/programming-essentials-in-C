//Write a program that asks the user to enter the number of a month, and prints the name of that month on the screen.
//When the number does not correspond to a month (less than 1 or greater than 12), the program prints: Error: no such month in my calendar.
#include <stdio.h>

int main()
{
    int  i;
    scanf("%d",&i);
    
	switch(i) {
        case 1: puts("January"); break;
        case 2: puts("February"); break;
        case 3: puts("March"); break;
        case 4: puts("April"); break;
        case 5: puts("May"); break;
        case 6: puts("June"); break;
        case 7: puts("July"); break;
        case 8: puts("August"); break;
        case 9: puts("September"); break;
        case 10: puts("October"); break;
        case 11: puts("November"); break;
        case 12: puts("December"); break;
        default: puts("Error: no such month in my calendar.");
}
	return 0;
}
