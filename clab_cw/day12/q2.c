/*
WAP to Print all unique 
elements of an array.
*/

#include <stdio.h>

int main() {
    
    int n;
    printf("\n");
    printf("Enter the size of an Array:\n");
    scanf("%d", &n);

    int num[n];
    int counter[n];
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter no. %d\n", i + 1);
        scanf("%d", &num[i]);
        counter[i] = 0;
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        if (counter[i] == 1)
        continue;

        for (int j = i + 1; j < n; j++)
        {
            if (num[i] == num[j])
            {
                counter[j] = 1;
                counter[i] = 1;
            }
        }
    }

    printf("The unique elements are:\n");
    for (int i = 0; i < n; i++)
    {
        if (counter[i] == 0)
        {
            printf("%d  ", num[i]);
        }
    }
    printf("\n\n");

    return 0;
}