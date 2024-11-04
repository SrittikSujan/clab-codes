/*
WAP to print all the even and 
odd numbers in an 1-D array.
*/

#include <stdio.h>

int main() {
    
    int n;
    printf("\n");
    printf("Enter the size of an Array:\n");
    scanf("%d", &n);

    int num[n];
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter no. %d\n", i + 1);
        scanf("%d", &num[i]);
    }
    printf("\n");

    printf("The even nos. are:\n");
    for (int i = 0; i < n; i++)
    {
        if (num[i]%2 == 0)
        {
            printf("%d  ", num[i]);
        }
    }
    printf("\n\n");

    printf("And the odd nos. are:\n");
    for (int i = 0; i < n; i++)
    {
        if (num[i]%2 != 0)
        {
            printf("%d  ", num[i]);
        }
    }
    printf("\n\n");
    
    return 0;
}