#include <stdio.h>
int main()
{

    int n, i, sum;
    printf("Enter a number:\n");
    scanf("%d", &n);

    sum = 0;

    i = 1;
    while (i < n)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    if (sum == n)
    {
        printf("The given num is perfect.\n");
    }
    else
    {
        printf("The given num is not perfect.\n");
    }

    return 0;
}
