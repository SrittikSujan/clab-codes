/*
WAP by designing a 
recursive function to 
calculate the sum of the 
digits of any given integer 
until it becomes a single 
digit number.
*/

#include <stdio.h>

int summation(int n)
{
    if (n < 10) return n;

    return n % 10 + summation(n / 10);    
}

int reduction(int n)
{
    if (n < 10) return n;

    return reduction(summation(n));
}

int main() {

    int n;
    printf("\nEnter a positive integer: ");
    scanf("%d", &n);

    int result = reduction(n);
    printf("\nThe single digit sum of the no. is: %d\n\n", result);

    return 0;
}