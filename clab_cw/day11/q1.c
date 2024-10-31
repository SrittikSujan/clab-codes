/* 
WAP to create an array that 
can store N integers and 
display the contents of the 
array
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

    printf("The array contents are:\n");

    for(int j = 0; j < n; j++)
    {
        printf("%d \n", num[j]);
    }
    return 0;
}