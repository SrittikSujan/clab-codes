/*
WAP to search an element in 
an 1-D array.
*/

#include <stdio.h>

int main() {
    
    int n;
    printf("Enter Array Size\n");
    scanf("%d", &n);

    int num[n];
    int i = 1;
    while (i <= n)
    {
        printf("Enter no. %d\n",(i));
        int a;
        scanf("%d", &a);
        num[i-1]=a;
        i++;
    }

    int search_element;
    printf("Enter the element to be searched\n");
    scanf("%d", &search_element);

    for (int i = 0; i < n; i++)
    {
        if (search_element == num[i])
        {
            printf("Number found at the location = %d", i + 1);
        }

        else
        {
            printf("No. not found!\n");
            break;
        }
        
    }

    return 0;
}