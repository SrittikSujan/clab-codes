/*
WAP to reverse the array 
elements.
*/

#include <stdio.h>

int main() {
    
    int n;
    printf("\n");
    printf("Enter the size of an Array:\n");
    scanf("%d", &n);

    int num[n + 1];
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter no. %d\n", i + 1);
        scanf("%d", &num[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            num[j] = num[j - 1];
        }
        num[i] = num[n];
    }
    
    printf("The reversed array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", num[i]);
    }
    printf("\n\n");

    return 0;
}