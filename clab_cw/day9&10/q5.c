#include <stdio.h>

int main() {
    
    int n, column;
    
    printf("Enter the no. of rows:\n");
    scanf("%d", &n);

    column = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            printf("%d", i);
        }
        column++;
        printf("\n");
    }

    return 0;
}