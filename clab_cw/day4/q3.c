#include <stdio.h>
int main()
{

    int a, b, c, sum;

    printf("Enter a six-digit number: ");
    scanf("%d", &a);

    c = a % 10;
    b = a / 100000;
    sum = b + c;

    printf("Sum of the first and last digits: %d\n", sum);

    return 0;
}
