#include <stdio.h>
int main()
{

    float a, b, c, d, e, f, g, h, i;

    printf("Enter the buying price: \n");
    scanf("%f", &a);

    printf("Enter the marker price: \n");
    scanf("%f", &b);

    printf("Enter the discount: \n");
    scanf("%f", &c);

    d = (c / 100) * b;
    e = b - d; // marker price after discount.

    if (e > a)
    {
        f = e - a;
        h = (f / a) * 100;
        printf("Seller made a profit of %.2f percent.\n", h);
    }

    else if (e == a)
    {
        printf("Seller didn't make any profit!\n");
    }

    else if (e < a)
    {
        g = a - e;
        i = (g / a) * 100;
        printf("Seller made a loss of %.2f percent.\n", i);
    }

    return 0;
}
