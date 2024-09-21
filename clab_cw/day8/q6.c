#include <stdio.h>
int main()
{

    int n, pdt;
    pdt = 1;

    printf("Enter a num:\n");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        pdt = pdt * i;
    }

    printf("The factorial is: %d\n", pdt);

    return 0;
}