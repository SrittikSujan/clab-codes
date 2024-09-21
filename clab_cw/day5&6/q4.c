#include <stdio.h>
int main()
{

    int yr;

    printf("Enter the year: \n");
    scanf("%d", &yr);

    if (yr % 4 == 0 || yr % 400 == 0)
    {
        printf("%d is a leap year\n", yr);
    }
    else
    {
        printf("%d is not a leap year\n", yr);
    }

    return 0;
}
