#include <stdio.h>

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int main() {
    
    int num1, num2;

    printf("\n");
    printf("Enter first no.\n");
    scanf("%d", &num1);
    
    printf("\n");
    printf("Enter second no.\n");
    scanf("%d", &num2);

    printf("\n");
    int result = sum(num1, num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, result);
    printf("\n");

    return 0;
}