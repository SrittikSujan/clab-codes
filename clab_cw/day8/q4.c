#include <stdio.h>
int main()
{

    int n, b, c, f;

    printf("Enter no. of Lucas nos. to be generated:\n");
    scanf("%d", &n);

    b = 1;
    c = 3;
    printf("Here's the Lucas series:\n");
    printf("%d\n", b);
    printf("%d\n", c);

    int i = 1;
    while (i <= n - 2)
    {
        f = b + c;
        printf("%d\n", f);
        b = c;
        c = f;
        i++;
    }

    return 0;
}
