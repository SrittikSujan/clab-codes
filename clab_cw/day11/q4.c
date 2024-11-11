/*
WAP to find largest element 
stored in an array.
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
    
    int big_no;
    for (int i = 1; i < n; i++)
    {
        if (num[i - 1] > num[i])
        {
            big_no = num[i - 1];
        }
        else
        {
            big_no = num[i];
        }
    }
    
    printf("The largest element stored in an array is: %d\n", big_no);

    return 0;
}