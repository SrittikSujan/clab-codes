/*
WAP to find out the 
multiplication of the numbers 
stored in an array of integers. 
*/

#include <stdio.h>

int main()
{
    
    int n;
    printf("Enter the size of an Array:\n");
    scanf("%d", &n);

    int num[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter no. %d\n", i + 1);
        scanf("%d", &num[i]);
    }

    int pdt = 1;
    for (int i = 0; i < n; i++)
    {
        pdt = pdt * num[i];
    }

    printf("The product of all the integers in the the array are: %d\n", pdt);

    return 0;
}