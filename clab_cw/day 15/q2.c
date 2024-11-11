#include <stdio.h>

int fact(int facto)
{
    int pdt = 1;
    for (int i = facto; i >= 1; i--)
    {
        pdt = pdt * i;
    }
    return pdt;
}


int main() {
    
    int num;
    printf("\n");
    printf("Enter the no. of which you want to find the factorial\n");
    scanf("%d", &num);
    printf("\n");

    int factorial = fact(num);
    printf("The factorial of %d is: %d\n", num, factorial);
    printf("\n");

    return 0;
}