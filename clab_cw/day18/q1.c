/*
WAP to find the factorial 
of a number n by writing 
a recursive function for 
it.
*/

#include <stdio.h>

int fact(int n)
{
    if (n == 0) return 1;
    return n * fact(n - 1);
}

int main() {

    int n;
    printf("\nEnter the no. : ");
    scanf("%d", &n);

    printf("\nThe factorial of %d is:\n", n);
    printf("%d\n\n", fact(n));
    
    return 0;
}