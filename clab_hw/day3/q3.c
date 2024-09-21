#include <stdio.h>
int main()
{

    int a;

    printf("Enter the amount in +ve integers: \n");
    scanf("%d", &a);

    printf("%d paisa = %d Rupee and %d paisa\n", a, a / 100, a % 100);

    return 0;
}
