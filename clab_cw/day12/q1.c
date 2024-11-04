/*
WAP to display the array 
elements in ascending order.
*/

#include <stdio.h>

int main() {
    
    int n, temp;
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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if ( num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
            
        }
        
    }

    printf("The ascending order is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", num[i]);   
    }
    printf("\n\n");

    return 0;
}