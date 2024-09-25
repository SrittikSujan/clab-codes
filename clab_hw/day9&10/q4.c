#include <stdio.h>

int main() {
    
    int n, m, l;
    
    printf("Enter no. of rows and columns:\n");
    scanf("%d", &n);
    m = n;
    l = n;

    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= (i - 1); j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= 2*l - 1; j++)
        {
            printf("*");
        }
        l--;
        printf("\n");
    }

    return 0;
}