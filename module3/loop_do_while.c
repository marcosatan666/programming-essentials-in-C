//Write a program that asks the user to enter a number. Then:
//the program should print the number of lines corresponding to the number inputted;
//each line should contain the number of pairs of characters *# equal to the number of this line.
//The outputted "drawing" should be similar to the right half of a pyramid.
//Your version of the program must print the same result as the expected output. To do this lab, you must use two do-while loops.
//However:
//when the user inputs a number less than or equal to 1, the program should print only one line;
//When the user inputs a number greater than 20, the program should print only twenty lines.

#include <stdio.h>

int main()
{
	int a;
    int j;
    int i = 0;
    char s[6] = "*#";
    scanf("%d", &a);
    do{
        j = 0;
        i++;
        do{
            printf("%s",s);
            j++;
        }while(j<i);
        printf("\n");
    }while(i<a);
	return 0;
}
