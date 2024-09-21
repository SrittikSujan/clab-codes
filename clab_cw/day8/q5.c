#include <stdio.h>
int main()
{

    int n, m, hcf1, hcf2, lcm1, lcm2;

    printf("Enter two numbers:\n");
    scanf("%d"
          "%d",
          &n, &m);

    // finding hcf rn.

    if (m < n)
    {

        int i = 1;
        while (i <= m)
        {

            if (m % i == 0 && n % i == 0)
            {
                hcf1 = i;
            }
            i++;
        }
        printf("The GCD for the given two nos. is: %d\n", hcf1);

        lcm1 = (n * m) / hcf1;
        printf(" And, the LCM for the given two nos. is: %d\n", lcm1);
    }

    else if (n < m)
    {

        int j = 1;
        while (j <= n)
        {

            if (n % j == 0 && m % j == 0)
            {
                hcf2 = j;
            }
            j++;
        }
        printf("The GCD for the given two nos. is: %d\n", hcf2);

        lcm2 = (n * m) / hcf2;
        printf("And, the LCM for the given two nos. is: %d\n", lcm2);
    }

    return 0;
}
