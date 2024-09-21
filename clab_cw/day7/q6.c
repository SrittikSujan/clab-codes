#include <stdio.h>
#include <math.h>
int main()
{

    int a, b, j, temp, num;
    int count = 0;
    int box = 0;

    printf("Enter a whole number that you want to reverse: ");
    scanf("%d", &temp);

    a = temp;
    b = temp;
    j = temp;

    if (j == 0)
    {
        count = 1;
    }
    else
    {
        while (j != 0)
        {
            j = (j / 10);
            count = count + 1;
        }
    }

    while (a % 10 != 0)
    {

        num = a % 10;
        count = count - 1;
        box = box + (num * (pow(10, count)));
        a = a / 10;
    }

    printf("The reversed form of \'%d\' is \'%d\'.\n", b, box);

    return 0;
}
