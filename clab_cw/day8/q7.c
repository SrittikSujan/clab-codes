#include <stdio.h>
int main()
{

    int num, sum, pdt, remndr, safe_no;

    printf("Enter a num:\n");
    scanf("%d", &num);

    safe_no = num;

    sum = 0;
    while (num > 0)
    {
        remndr = num % 10;
        pdt = 1;
        for (int i = 1; i <= remndr; i++)
        {
            pdt = pdt * i;
        }
        sum = sum + pdt;
        num = num / 10;
    }

    safe_no == sum ? printf("The no. is strong.\n") : printf("The no. isn't strong.\n");

    return 0;
}