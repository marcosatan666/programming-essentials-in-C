//Write a program that asks the user to enter a number, and prints twice as many lines as the number inputted.
//The first half of every other line contains one * character at the start, as many spaces as the number of this line (line numbers count from 0 in this task) and one * character at the end of the line. The second half is a mirror reflection of the first.
//The outputted "drawing" should be similar to an arrowhead.
//Your version of the program must print the same result as the expected output. To do this task, you should use two outer for loops and two inner for loops.
//You shouldn't use any special formatting in the printf to print the spaces - just use the for loop.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);
    if(num > 20) num = 20;
    for (int i = 1; num>=2 && i<=num; i++) {
        printf("*");
        for(int j = 1; j < i; j++) printf(" ");
        printf("*\n");
    }
    for (int i2 = 1; num>=2 && i2<=num; i2++) {
        printf("*");
        for(int j2 = 0; j2 < num-i2; j2++) printf(" ");
        printf("*\n");
    }
	return 0;
}
