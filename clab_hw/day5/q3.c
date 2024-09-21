#include <stdio.h>
int main()
{

    float a, b, c;

    printf("Enter the length of one side of the triangle.\n");
    scanf("%f", &a);
    printf("Enter the length of another side of the triangle.\n");
    scanf("%f", &b);
    printf("Enter the length of last side of the triangle.\n");
    scanf("%f", &c);

    if (a == b && b == c && c == a)
    {
        printf("An equilateral triangle\n");
    }
    else if (a == b && a != c && b != c)
    {
        printf("An isosceles triangle\n");
    }
    else
    {
        printf("A scalene triangle\n");
    }

    return 0;
}
