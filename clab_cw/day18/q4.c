/*
Write a recursive 
function to add the digits 
of a positive integer.
*/

#include <stdio.h>

int summation(int n)
{
    if (n < 10) return n;

    return n % 10 + summation(n / 10);
}

int main() {

    int n;
    printf("\nEnter a positive integer: ");
    scanf("%d", &n);

    int result = summation(n);
    printf("\nThe sum of all the digits of the no. is: %d\n\n", result);
    
    return 0;
}