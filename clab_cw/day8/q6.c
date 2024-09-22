#include <stdio.h>
int main()
{

    int n,i,pdt;
    pdt = 1;

    printf("Enter a num:\n");
    scanf("%d", &n);

    /*
    i = n;
    while (i >= 1) {
        pdt = pdt * i;
        i--;
    }
    */
    
    
    for (int i = n; i >= 1; i--)
    {
        pdt = pdt * i;
    }
    

    printf("The factorial is: %d\n", pdt);

    return 0;
}