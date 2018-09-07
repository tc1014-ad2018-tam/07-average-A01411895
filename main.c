//Luis Ignacio Acosta Zamora A01411895

/*
 * Write a program that computes the average of a series of numbers given by the user.
    Use a do... while cycle to compute such average.
    Keep accepting numbers while the user doesn't enter a 0 (zero).
    Once the user enter a 0, compute the average.  Show the averate and how many numbers where processed.
 */

#include <stdio.h>

int main() {

    int count=-1;
    int sum=0;
    int integer=0;

    printf("This code will give you the average of the numbers that you enter.\n");

    do{
        printf("Enter a number:");
        scanf("%d",&integer);

        sum = sum + integer;
        count ++;
    }
    while(integer != 0);

    sum = sum/count;

    printf("The average of the numbers you gave is: %i\n", sum);
    printf("You gave a total of %i", count);
    printf(" numbers.\n");

    return 0;
}
