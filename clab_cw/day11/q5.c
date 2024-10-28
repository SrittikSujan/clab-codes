#include <stdio.h>

int main()
{

    int n;
    printf("Enter Array Size\n");
    scanf("%d", &n);

    int num[n + 1]; // Create space

    int a, i = 1;
    while (i <= n)
    {
        printf("Enter no. %d\n", i);
        scanf("%d", &a);
        num[i - 1] = a;
        i++;
    }

    int inserted_element;
    printf("Enter an element to be inserted\n");
    scanf("%d", &inserted_element);

    int location;
    printf("Enter the location (0 to %d) at which the element is to be inserted\n", n);
    scanf("%d", &location);

    if (location < 0 || location > n)
    {
        printf("Invalid location!\n");
        return 1;
    }

    else
    {
        // Shifting
        for (int i = n; i > location; i--)
        {
            num[i] = num[i - 1];
        }

        num[location] = inserted_element;

        printf("The updated array contents are:\n");
        for (int i = 0; i <= n; i++)
        {
            printf("%d\n", num[i]);
        }
    }

    return 0;
}