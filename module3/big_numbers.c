// The most popular, human-readable way to write an IP (to be precise, IPv4) is to write four numbers separated with dots (e.g., 127.0.0.1). But an IP address can also be written as a 32-bit number.
// To get this form, you must multiply all the parts of the IP number by powers of 256 (256*256*256, 256*256, 256 and 1 - don't use precomputed versions).
// Write a program that asks the user to provide four numbers, and then checks if these numbers are more than or equal to 0, and less than or equal to 255.
// Next, the program should write both forms of the IP address: the human-readable one and the 32-bit-number one.
// Use the unsigned long int type; to print it, use the "%lu" format in the printf function.
// If any of the address parts doesn't meet the given criteria (0<=x<=255), print only this simple error message: Inccorect IP Address..

#include <stdio.h>

int main()
{   
    unsigned long int arr[4];
    printf("enter 4 numbers\n");
	for (int i=1;i<=4;i++) {
	    scanf("%lu",&arr[i]);
	    if (arr[i]<0 || arr[i]>255) {
	        printf("Incorrect IP Address.");
	        break;
	    }
	}
	printf("Human-readable IP address is: %lu.%lu.%lu.%lu \n",arr[1],arr[2],arr[3],arr[4]);
	printf("IP address as a 32-bit number: %lu", arr[1] * 256 * 256 * 256 + arr[2] * 256 * 256 + arr[3] * 256 + arr[4] * 1);
	return 0;
} 
