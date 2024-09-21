#include <stdio.h>
int main()
{

    int a, b, c;

    printf("Enter the distance(in meters): \n");
    scanf("%d", &a);

    b = a / 1000;
    c = a % 1000;

    printf("%d meters = %d kilometer and %d meter\n", a, b, c);

    return 0;
}
