#include <stdio.h>
int main()
{

    float a, b, temp;

    printf("Enter the first no. ");
    scanf("%f", &a);

    printf("Enter the second no. ");
    scanf("%f", &b);

    printf("Before swapping:\nthe first no. is %f and the second no. is %f\n", a, b);

    // now swapping the values...
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\nThe first no. is %f and the second no. is %f\n", a, b);

    return 0;
}
