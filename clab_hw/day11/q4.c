/*
WAP to find the second largest 
element in an array.
*/

#include <stdio.h>

int main() {
    
    int n,temp;
    printf("Enter the size of an Array:\n");
    scanf("%d", &n);

    int num[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter no. %d\n", i + 1);
        scanf("%d", &num[i]);
    }

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

    printf("The second largest no. is %d\n", num[n - 2]);
    
    return 0;
}