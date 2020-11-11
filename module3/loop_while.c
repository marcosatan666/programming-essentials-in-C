//Write a program that takes two integer numbers and prints their sum. Do this until the user enters 0 (zero) (but print the last sum).
//Additionally, if the user inputs 99 as the first number and 0 as the second number, just print Finish., and end the program.
//Use the while loop in your code.
//Your version of the program must print the same result as the expected output.

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a,b,i=0, sum[50];
    bool isFalse = 0;
    while (true) {
        scanf("%d",&a);
        scanf("%d",&b);
        sum[i] = a+b;
        sum[i+1] = 0;
        i++;
        isFalse = a==99 && b==0;
        if (b==0) break;
    }
    for (int j=0;j<50;j++) {
        printf("Sum: %d\n",sum[j]);
        if(!sum[j+1]) break;
    }
    if (isFalse) printf("Finish");
    return 0;
}
