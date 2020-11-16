//Write a program that asks the user to enter the number of a month, and prints the name of that month on the screen.
//When the number does not correspond to a month (less than 1 or greater than 12), the program prints: Error: no such month in my calendar.
#include <stdio.h>

int main()
{
    char arr[][12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int i;
    scanf("%d",&i);
    puts(i>=1 && i <=12 ? arr[i-1] : "Error: no such month in my calendar.");
	return 0;
}
