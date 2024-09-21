#include <stdio.h>
int main()
{

    int a, num;
    int box = 0;

    printf("Enter a whole no.\n");
    scanf("%d", &a);

    for (int i = a; (i % 10) != 0; i = (i / 10))
    {
        num = i % 10;
        box = box + num;
    }

    printf("The sum of each digit of \'%d\' is: %d\n", a, box);

    return 0;
}
