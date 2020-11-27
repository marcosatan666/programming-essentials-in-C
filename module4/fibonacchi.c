//Write a program that prints this Fibonacci sequence and two of its subsequent numbers. It should print:

//the first ten numbers from the Fibonacci sequence,
//then it should print only the odd numbers (1st, 3rd, 5th, 7th and 9th),
//after that, only the even numbers (2nd, 4th, 6th, 8th and 10th).

#include <stdio.h>

int main()
{
	int a[9];
	int i;
	a[0]=1; a[1]=1;
	for (i=2;i<10;i++) {
	    a[i]=a[i-2]+a[i-1];
	}
	for (i=0;i<10;i++) {
	    printf("%d\n",a[i]);
	} //для всех
	

	
	for (i=0;i<10;i++) {
	    if (i%2==0) printf("%d\n",a[i]);
	} //для нечетных
		for (i=0;i<10;i++) {
	    if (i%2!=0) printf("%d\n",a[i]);
	} //для четных
	return 0;
}
