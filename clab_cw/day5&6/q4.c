#include <stdio.h>
int main()
{

    int yr;

    printf("Enter the year: \n");
    scanf("%d", &yr);

    if (yr % 400 == 0)
    {
        printf("%d is a leap year\n", yr);
    }
    else if (yr % 100 == 0 && yr % 4 == 0 && yr % 400 != 0)
    {
        printf("%d is not a leap year.\n", yr);
    }
    else if (yr % 4 == 0 && yr % 100 != 0 && yr % 400 != 0)
    {
        printf("%d is a leap year.\n", yr);
    }
    else if ( yr % 4 != 0)
    {
        printf("%d is not a leap year\n", yr);
    }

    return 0;
}