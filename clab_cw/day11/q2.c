/*
WAP to find out the sum of the 
N numbers stored in an array 
of integers. 
*/

#include <stdio.h>

int main()
{

    int n;

    printf("Enter Array Size\n");
    scanf("%d", &n);

    int num[n];
    int i = 1;
    while (i <= n)
    {
        printf("Enter no. %d\n", (i));
        int a;
        scanf("%d", &a);
        num[i - 1] = a;
        i++;
    }

    printf("The Sum of all the nos. in the array are:\n");

    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        sum = sum + num[j];
    }
    printf("%d\n", sum);

    return 0;
}