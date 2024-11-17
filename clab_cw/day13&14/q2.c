/*
WAP to find the sum of 
two matrices of order 
2x2 
using 
multidimensional 
arrays.
*/

#include <stdio.h>

int main() {
    
    int matrix1[2][2];
    int matrix2[2][2];

    printf("\nEnter elements of A matrix\n");
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter A%d%d: ", i + 1, j + 1);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("\nEnter elements of B matrix\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter B%d%d: ", i + 1, j + 1);
            scanf("%d",&matrix2[i][j]);
        }   
    }

    printf("\The summation of both the Matrixes are:\n")

    for (int i = 0; i < ; i++)
    {
        
    }
    

    return 0;
}