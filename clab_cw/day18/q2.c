/*
WAP to calculate 
GCD/HCF of two 
numbers by using a 
recursive function.
*/

#include <stdio.h>

int hcf(int m, int n)
{
    if (n == 0)
        return m;

    return hcf(n, m % n);
    
}

int main() {

    int m,n,o;
    printf("\nEnter two nos. for which you want the GCD :\n");
    scanf("%d %d", &m, &n);

    o = hcf(m, n);
    printf("\nThe GCD is: %d\n\n", o);
    
    return 0;
}