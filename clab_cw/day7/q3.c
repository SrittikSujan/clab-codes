#include <stdio.h>
int main()
{

    int n;

    printf("Enter the value of 'n' from which you want to count down to 1.\n");
    scanf("%d", &n);

    printf("Here's the countdown\n");

    for (int i = n; i >= 1; i = i - 1)
    {

        printf("%d\n", i);
    }

    return 0;
}
